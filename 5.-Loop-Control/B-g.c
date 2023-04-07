#include<stdio.h>
    
int main()
{
    int i,j,k,num ,count_p=0,count_n=0,count_o=0;
    
    printf("Enter the number to enter :");
    scanf("%d",&num);


    for(i=0;i<num;i++){
        fflush(stdin);
        printf("Enter num:");scanf("%d",&k);
        if(k>0) count_p++;
        else if(k==0) count_o++;
        else if(k<0) count_n++;
    }
    printf("positive , zero ,negitive number are :%d %d %d\n",count_p,count_o,count_n);
    
    return 0;
}