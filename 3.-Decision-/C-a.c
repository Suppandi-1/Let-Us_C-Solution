#include<stdio.h>//profit or loss
    
int main()
{
    float cp, sp, pg;
    printf("Enter the value of cost price and selling price :\n");
    scanf("%f %f",&cp,&sp);
    
    if(sp>=cp) printf("Seller made a profit of %f\n",sp-cp);
    else printf("seller is in loss of %f",cp-sp);

    
    return 0;
}