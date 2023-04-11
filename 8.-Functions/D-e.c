#include<stdio.h>

int prime(int num){

    if(num==1){printf(" .\n") ;}
    else 
    {
        for(int i=2;i<=num;i++){
            if(num%i==0){ printf("%d ,",i) ; num = num/i; prime(num);break ;}
        }
   
    } 
   
}
    
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
    
    
}