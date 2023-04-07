#include<stdio.h>
    
int main()
{
    float hard, carb, tensi; int g;
    printf("Enter the  value of hardness , carbon , rtensile strength :\n");
    scanf("%f %f %f", &hard, &carb, &tensi);
    if (hard>50 && carb<0.7 && tensi >5600) g=10;
    else if(hard>50 && carb<0.7) g=9;
    else if(carb<0.7 && tensi >5600) g=8;
    else if(hard>50 &&tensi >5600) g=7;
    else if(hard>50 || carb<0.7 || tensi >5600) g=6;
    else g=5;

    printf("Grade is %d\n",g);

    
    return 0;
}