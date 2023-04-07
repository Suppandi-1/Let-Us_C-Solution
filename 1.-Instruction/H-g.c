#include<stdio.h>
#include<math.h>
    
int main()
{
    double a;
    printf("Provide an angle :");
    scanf("%lf",&a);
    printf("cos(a) : %lf\n",cos(a) );
    printf("sin(a) : %lf\n",sin(a));
    printf("tan(a) : %lf\n",tan(a));
    printf("cot(a) : %lf\n",1/tan(a));
    printf("cosin(a):%lf\n",1/sin(a));
    printf("sec(a) : %lf\n",1/cos(a));
    return 0 ;
}