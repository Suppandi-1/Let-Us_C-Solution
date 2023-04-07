#include<stdio.h>
    
int main()
{
    float x1,x2,y1,y2,x3,y3;
    printf("Give the x y cordinate :");
    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);

    if((y3-y2)*(y2-y1)==(x3-x2)*(y2-y1)) printf("yes , points are in same line\n");
    else printf("are not no same line\n");

    return 0;
}