#include<stdio.h>
    
int main()
{
    int num ,octal , q, d, r,i=0,j=0;

    printf("Enter a number :");  scanf("\n");scanf("%d",&num);
    while(num%8!=0){
        i++;
    }
    int s[i];

    while(num%8!=0){
        
        r=num%8; s[j]=r;
        num= num/8;
        j++;

    }

    for(int k=0;k<i;k++){

    printf("%d",s[i]);
    }
    printf("\n");

    
    return 0;
}//pending the reversse logic...