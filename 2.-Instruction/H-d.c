//cartesian to poalr
#include<stdio.h>
#include<math.h>
    
int main()
{
    float x , y;
    printf("Enter x and y cordinate\n:");
    scanf("%f %f",&x,&y);

    float r ,th;
    r= hypotf(x,y);
    th = atan(y/x);

    printf("the polar coordinates are (r , thita) \n%f ,%f:",r,th);

    
    return 0;
}