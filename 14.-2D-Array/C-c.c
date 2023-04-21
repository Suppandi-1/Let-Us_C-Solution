#include<stdio.h>
    
int main()
{
    int arr[5][5];
    int temp[5][5];

    for(register int i=0;i<5;i++){
        for(register int j=0; j<5;j++){
            printf("Enter the value of arr[%2d][%2d]:\n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }  
    

    for(register int i=0;i<5;i++){
        for(register int j=0; j<5;j++){
            //coping upper trianguialr in temp
            if(j>i){
                temp[i][j] = arr[i][j];
            }
        }
    }  
    
    for(register int i=0;i<5;i++){
        for(register int j=0; j<5;j++){
            //creating transpose
            if(j>i){arr[i][j] = arr[j][i];}
            if(j<i){arr[i][j] = temp[j][i];}
        }
    }  

     for(register int i=0;i<5;i++){
        for(register int j=0; j<5;j++){
            //printing taranspose
            printf("the value of arr[%2d][%2d]: %d\n",i,j,arr[i][j]);
            
        }
    }  
    return 0;
}