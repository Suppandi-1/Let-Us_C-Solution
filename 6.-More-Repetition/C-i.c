#include<stdio.h>
    
int main()
{
    float x;
    scanf("%f",&x);
    float numb=(x-1)/x,num=(x-1)/(x*2) , sum;
    for(int i=0; i<7;i++){
        sum = sum +numb;
        numb =  num*numb ;
    }
    printf("%f\n",sum);
    
    return 0;
}