#include<stdio.h>
    
int main()
{
    int a,b,temp;
    printf("Enter the value of C and D:\n");
    scanf("%d %d",&a ,&b);
    temp = a;
    a=b;
    b=temp;
    printf("now values are as %d %d ",a,b );
    
    return 0;
}