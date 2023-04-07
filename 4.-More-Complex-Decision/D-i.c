#include<stdio.h>
    
int main()
{
    float w, h, b;
    

    scanf("%f %f",&w,&h);
    b = w/(h*h);

    if(b>=40) printf("Morbidly obsed\n");
    else if(b>=30.) printf("Obse \n");
    else if(b>=25.) printf("Overweight\n");
    else if(b>=18.6) printf("Ideal\n");
    else if(b>=17.6) printf("Underweight\n");
    else if(b>=15.1) printf("Anorexic\n");
    else if(b<15.) printf("Starvation\n");

   
    
    
    return 0;
}