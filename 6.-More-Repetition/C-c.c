#include<stdio.h>
    
int main()
{
    float num=0 ,fact =1, i, j,k;
     
    for(i=0;i<7;i++){
        fact = i+1;
        for(j=1;j<i+1;j++){
            fact = fact*j;
        }
        num = num + (i+1)/fact;
    }
    printf("The value after repitation :%f\n",num);
    
    return 0;
}