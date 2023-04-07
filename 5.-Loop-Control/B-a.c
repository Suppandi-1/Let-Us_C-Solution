#include<stdio.h>
    
int main()
{
    int h, o;
    scanf("%d",&h);

    o=0;
    for(int i=0; i<(h-40);i++){
        o=o+12;
    }
    



    printf("Overtime pay is : %d\n",o);
    
    return 0;
}