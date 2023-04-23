#include<stdio.h>
    
int main()
{
    int size,count=0 , arr[size][size];
    printf("Enter size of matrix (n)\n\n");
    int k=1;
    for( register int i=0;i<size;i++){
        for( register int j=0;j<size;j++){
            printf("%2d. Enter value for M[%d+1][%d+1] :");k++;
            scanf("%d",&arr[i][j]);

        }
    }

    for( register int i=0;i<size;i++){
        for( register int j=0;j<size;j++){
            if(i!=j){

            if(arr[i][j]==arr[j][i]){count++;}
            }
            else{
                
            }
        }
    }
    
    if(count+5 == size*size){ printf("Given matrix is symmetric\n");}
    return 0;
}