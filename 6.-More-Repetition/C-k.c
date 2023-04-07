#include<stdio.h>
    
int main()
{
    int yr;
    float p, pop=100000;
    for(int i=0;i<10;i++){
        p=100*pop/110;
        printf("population %d yr before is %f\n",i+1,p);
        pop =p;
    }
    
    return 0;
}