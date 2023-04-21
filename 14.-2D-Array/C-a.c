#include<stdio.h>
    
int main()
{
    int threed[3][2][3];
    //first element
    printf("First Element is %d\n",*(*(*(threed +0)+0)+0));
    //last
    printf("last Element is %d\n",*(*(*(threed +3)+2)+3));

    
    return 0;
}