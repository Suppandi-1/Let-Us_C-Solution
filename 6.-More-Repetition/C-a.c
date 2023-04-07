//print all prime betwwen 1--300
#include<stdio.h>
    
int main()
{
    for(int n=2 ;n<301;n++){
        int a=0;
        for(int j=2;j<=n;j++){
            if(n%j==0) a=a+1;
        }
        if(a==1)printf("%d ",n);
        
    }
    printf("\n");
    
    return 0;
}