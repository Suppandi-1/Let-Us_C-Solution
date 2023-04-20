#include<stdio.h>
    
int main()
{
    int num[100];

    //1
    for(register int i=0; i<100;i++){
        *(num+i)=i+1;
    }

    //3
    for(register int j=1;j<99;j++){
        //2//4
        for(register int k=2; k<*(num+j);k++){
            if(*(num+j)%k==0) *(num+j)=0;
             
        }
    }

    //5
    for(register int k=0; k<99;k++){
        printf("%d ",*(num+k));
    }
    printf("\n");
    for(register int k=0; k<99;k++){
        if(*(num+k)!=0) printf("%d ",*(num+k));
    }
    printf("\n");
    return 0;



    
    return 0;
}