//triangle verfiying by triangle inequality
#include<stdio.h>
    
int main()
{
    float a,b,c;
    scanf("%f %f %f",a,b,c);

    
    if((a<(b+c))&& (b<(a+c)) && (c<(a+b))) printf("triangle is valid");
    else printf("Triangle is not valid");
    
    return 0;
}