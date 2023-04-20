#include<stdio.h>
    
int main()
{
    int arr[25], num;
    for(  register int i=0;i<25;i++){
        printf("Enter %dth calue in array",i+1); scanf("%d",(arr+i));
    }

    printf("Enter number to search in array :\n");
    scanf("%d",&num);
    int count=0;

    for(register int j=0;j<25;j++){
        if( num == *(arr+j)) {count++;}
    }

    if(count>0){printf("It is present an %d times\n", count);}
    return 0;
}