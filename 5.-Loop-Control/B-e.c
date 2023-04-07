#include<stdio.h>
    //amstrong number
int main()
{
    int a,b,c;
    for(int i=1;i<=500;i++){
        if(i<10){
            if(i*i*i ==i) printf("%d ",i);
        }
        else if( i<100){
            a= i/10 ;
            b= i-a*10;
            if((a*a*a + b*b*b )== i) printf("%d ",i);
        }
        else if( i<=500){
            a=i/100;
            b=(i-a*100)/10;
            c=(i-a*100 -b*10);
            if((a*a*a + b*b*b + c*c*c) == i) printf("%d ",i);
        }
    }
    
    return 0;
}