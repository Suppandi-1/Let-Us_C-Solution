#include<stdio.h>

void fibonacci(int a , int b ,int c ,int i ,int n){
    int t=c;
    printf("%d ,",c);
    c = c+b;
    a = b;
    b = t;
    i= i+1;
    if(i==n+1){ printf(". ,");}
    else{
        fibonacci(a,b,c,i,n);
    }
}

    
int main()
{
    fibonacci(0,0,1,1, 25);
    
    return 0;
}