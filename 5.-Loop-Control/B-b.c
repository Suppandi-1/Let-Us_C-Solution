#include<stdio.h>
//factorial
    
int main()
{
    int fact=1 ,num;

    scanf("%d",&num);

    for(int i=0;i<num;i++){
        fact=fact*(i+1);
    }
    printf("%d\n",fact);
    
    return 0;
}