#include<stdio.h>
    
int main()
{
    int l ,b,a,p;
    printf("Enter the value of leangth and bradth :");
    scanf("%d %d",&l,&b);

    if((4*(l+b) )> (l*b)) printf("parameter is greater than area\n");
    else if((4*(l+b) )<(l*b)) printf("parameter is smaller than area\n");
    else printf(" BOtha re eaual\n");
    
    return 0;
}