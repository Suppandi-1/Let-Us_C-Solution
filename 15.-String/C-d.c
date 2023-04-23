#include<stdio.h>
#include<string.h>

#include<math.h>
int String_to_int(char *ch){
    int arr[10],in=0,inte;
    int len= strlen(ch);
    inte = *ch;
    for( register int i=0;i<10;i++){
        if(*(ch) != '\0'){
            arr[i]=(*(ch)-48)*pow(10,len-i-1);
            in=in +arr[i];
        }
        ch++;
    }
    return in;
        
    
}
    
int main()
{
    //ascii value int(48----57)=char(0----9)
    printf("Enter a string integer less than 10 digit:");
    char integerchar[10];
    int integerint;
    scanf("%s",integerchar);

    integerint = String_to_int(integerchar);

    printf("%10d\n",integerint);

    
    return 0;
}