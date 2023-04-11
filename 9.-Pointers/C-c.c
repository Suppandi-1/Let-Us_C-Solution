#include<stdio.h>
#include<math.h>
//without pointer solution

int factorial(int a){
    if(a==1){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}

float sin_x(float x){
    float num =x;
    float val =0;
    for(int i=1;i<=20;i=i+2){
        val = val + num;
        num = pow(-1,(i-1)/2)*num*x*x*(factorial(i))/(factorial(i+2));
    }
}
    
int main()
{
    float x;
    scanf("%f",&x);
    printf("the sine of %f is :%f",x,sin_x(x));
    
    return 0;
}