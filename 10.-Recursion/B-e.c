#include<stdio.h>
int sum_of_first_(int n){
    if(n==0){ return 0;}
    else{
        n = n + sum_of_first_(n-1);
    }
    return n;


}
    
int main()
{
    int n;
    scanf("%d",&n);
    printf("sum is : %d ",sum_of_first_(n));
    
    return 0;
}