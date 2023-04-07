#include<stdio.h>
// finding ramanujan number=-450
    
int main()
{
    for(int i=1;  i<20;i++){
        for(int j=1 ; j<20; j++){
            for( int k=1; k<20;k++){
                for(int l=1; l<20; l++){
                    if(i>=j&& k>l && i!=k && i!=l &&j>l ){
                        if(i*i*i + j*j*j == k*k*k +l*l*l){
                            printf(" numb is : %d , with set(%d,%d),(%d,%d)\n",i*i*i + j*j*j, i,j,k,l);
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}