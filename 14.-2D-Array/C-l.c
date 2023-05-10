#include<stdio.h>
#define siz 6
    
int main()
{
    int A[siz][siz],B[siz][siz];
    int k=1;
    for( register int i=0;i<siz;i++){
        for( register int j=0;j<siz;j++){
            printf("%2d. Enter value for A[%d+1][%d+1] :");k++;
            scanf("%d",&A[i][j]);
        }
    }

    printf("\n");
    printf("Det(A) = %d\n", A[0][0]*A[1][1]*A[2][2] + A[0][1]*A[1][2]*A[2][0] + A[0][2]*A[1][0]*A[2][0] - A[0][2]*A[2][1]*A[1][0] - A[0][1]*A[2][0]*A[1][2] );

    
    return 0;
}