#include<stdio.h>
    
int main()
{
    int a,b,c;
    for(a=1;a<=30;a++){
        for(b=1;b<=30;b++){
            for(c=1;c<=30;c++){
                if(a>=b && b>=c){
                    if((a*a + c*c==b*b)||(a*a ==b*b +c*c)||(a*a +b*b ==c*c) )
                        printf("%d %d %d \n",a , b,c);
                        }
            }
        }
    }
    
    return 0;
}