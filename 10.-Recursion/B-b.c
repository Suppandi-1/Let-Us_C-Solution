#include<stdio.h>

void repetatio(int k, int n){
    if(k==1){printf("1 ,");}
    else{
        if(n%k==0){printf("%d ,",k); k=k-1; repetatio(k,n);}
        else { k=k-1 ; repetatio(k,n);}
    }
}

void primefact(int n){
    
    int k=n;
    repetatio(k,n);
    
    
}
    
int main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);  

    primefact(num);
    
    return 0;
}