#include<stdio.h>
#include<math.h>//dont know why not working
    
int main()
{
    float a,b,c;
    printf("Enter the lengths of side of thrianglr a , b, c respectively :\n");
    scanf("%f %f %f",&a,&b,&c);

    float area;
    float w=0.5;
    float s;
    s= (a+b+c)/2.0;

    //area = powf(s*(s-a)*(s-b)*(s-c),w);
    area = sqrtf(s*(s-a)*(s-b)*(s-c));
    printf("The are of triangle is %f",area);
    
    return 0;
}