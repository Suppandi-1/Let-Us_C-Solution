#include<stdio.h>
int power(int , int );
    
int main()
{
    int num, pow;
    scanf("%d %d",&num,&pow);
    printf("%d raise to %d is: %d\n",num, pow, power(num,pow));

    
    return 0;
}

int power(int num , int pow){
    int val=1;
    for(int i=0;i<pow;i++){ val =num*val;}
    return val;
}