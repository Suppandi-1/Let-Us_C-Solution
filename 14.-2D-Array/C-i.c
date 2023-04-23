#include<stdio.h>
    
int main()
{
    int A[6][6],B[6][6];
    int k=1;
    for( register int i=0;i<6;i++){
        for( register int j=0;j<6;j++){
            printf("%2d. Enter value for A[%d+1][%d+1] :");k++;
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    k=1;
    for( register int i=0;i<6;i++){
        for( register int j=0;j<6;j++){
            printf("%2d. Enter value for B[%d+1][%d+1] :");k++;
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n");
    k=1;
    for( register int i=0;i<6;i++){
        for( register int j=0;j<6;j++){
            printf("%2d. The value of (A + B)[%d][%d] is  :%5d",i,j,A[i][j]+B[i][j] );k++;printf("\n");
        }
    }

    
    return 0;
}