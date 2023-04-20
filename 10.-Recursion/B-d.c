#include<stdio.h>

void without_recursion(int n){ 
    while(n!=0){
    printf("%d",n%2); n=(n-n%2)/2;

    }
    printf("\n");
}
void with_recursion(int n){

    if(n==0){printf("\n");}
    else{
        printf("%d",n%2); 
        with_recursion((n-n%2)/2 );
    }
}
    
int main()
{
    int num;
    printf("Enter integer:");scanf("%d",&num);

    without_recursion(num);
    with_recursion(num);
    
    return 0;
}