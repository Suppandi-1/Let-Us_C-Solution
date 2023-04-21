#include<stdio.h>
    
int main()
{
    int arr[5][5], max=0;
    for(register int i=0;i<5;i++){
        for(register int j=0; j<5;j++){
            printf("Enter the value of arr[%2d][%2d]:\n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }  
    
    // for(register int i=0;i<5;i++){
    //     for(register int j=0; j<5;j++){
    //         printf("the value of arr[%2d][%2d]: is %d\n",i,j,arr[i][j]);
            
    //     }
    // }  

    max=arr[0][0];
    for(register int i=0;i<5;i++){
        for(register int k=0 ;k<5;k++){
            if(max< *(*(arr+i)+k)){ max=arr[i][k];};
        }
    }  

    printf("max is %d ;\n",max);
    return 0;
}