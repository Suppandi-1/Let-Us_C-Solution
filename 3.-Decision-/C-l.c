#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==0&&y==0) printf("Lies on Origin");
    else if( x==0 ) printf("lies on Y axis");
    else  printf("lies on X axiz");
    return 0;
}