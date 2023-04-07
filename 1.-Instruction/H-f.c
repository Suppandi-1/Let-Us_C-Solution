#include<stdio.h>
    #include<math.h>
int main()
{
    float t ,v;
    printf("Enter the value of tand v\n");
    scanf("%f %f",&t,&v);
    printf("Wind chill factor id : %f",35.74+ 0.6215*t +(0.4275*t-35.75)*pow(v,.16));
    
    return 0;
}