#include<stdio.h>
#include<math.h>
    
int main()
{
    float p,q,r,n,a;
    for(int i=0;i<10;i++){
        scanf("%f %f %f %f",&p,&q,&r,&n);printf("%f\n",p*powf(1+r/q,n*q));
    }
    
    return 0;
}