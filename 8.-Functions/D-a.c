#include<stdio.h>

int factorial(int a);
    
int main()
{
    int num;
    scanf("%d",&num);
    printf("the factorial of %d is :%d\n",num , factorial(num));
    return 0;
}

int factorial(int a){
    if(a==1){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}