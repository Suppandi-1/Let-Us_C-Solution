#include<stdio.h>
    
int main()
{
    register int i ;
   // int i;
    printf("%u\n",&i);
    //will show an error hence register storage variable pointer is not acessable
    
    return 0;
}