#include<stdio.h>
    
int main()
{
    printf("Enter the values of angles of triangel\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if((a+b+c) == 180) printf("Triangle valid\n");
    else printf("Triangle not valid");
    
    return 0;
}