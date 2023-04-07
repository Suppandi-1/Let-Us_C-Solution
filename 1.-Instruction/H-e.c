#include<stdio.h>
#include<math.h>
    
int main()
{
    float l1,l2 ,g1,g2;
    printf("Enter the values of latitude \n:");
    scanf("%f %f ",&l1,&l2);
    printf("Enter the values of longitude\n:");
    scanf("%f %f ",&g1,&g2);

    float D=3963*acosf(sinf(l1)*sinf(l2) + cosf(l1)*cosf(l2)*cos(g1-g2));
    printf("the distance between them in numerical miles %f",D);
    
    return 0;
}