#include<stdio.h>
#include<math.h>
    
int main()
{
    float x, y ,r ,X ,Y;

    printf("Enter the value of cordinate X Y R:\n");
    scanf("%f %f %f",&x,&y,&r);

    printf("Enter the value of a coordinate X Y:\n");
    scanf("%f %f",&X,&Y);

    if(sqrt(pow(x-X, 2)+ pow(y-Y,2))<r) printf("inside\n");
    else if( sqrt(pow(x-X, 2)+ pow(y-Y,2)) == r ) printf("on\n");
    else printf("outside") ;

    return 0;
}