#include<stdio.h>
    
int main()
{
    int w;
    printf("Enter the value of weight :");
    scanf("%d",&w);

     if( w>=190)printf(" heavyweight\n");    
    else if( w>=189 )printf("middleweight\n");
    else if( w>=153) printf("Featherweight\n");
    else if( w>=121) printf("Bentamweight\n");
    else if(w<115) printf("Flyweight");
    return 0;
}