#include<stdio.h>
#define siz 3
    
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
    k=1;
    for( register int i=0;i<siz;i++){
        for( register int j=0;j<siz;j++){
            printf("%2d. Enter value for B[%d+1][%d+1] :");k++;
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n");
    k=1;
    
            printf("%2d. Enter value of (A*B)[%d][%d] is  :%5d",1,1,A[0][0]*B[0][0] +A[0][1]*B[1][0] +A[0][2]*B[2][0]  );k++;printf("\n");
            printf("%2d. Enter value of (A*B)[%d][%d] is  :%5d",1,2,A[0][1]*B[1][0] +A[0][1]*B[1][0] +A[0][2]*B[2][0]  );k++;printf("\n");
            printf("%2d. Enter value of (A*B)[%d][%d] is  :%5d",1,1,A[0][0]*B[0][0] +A[0][1]*B[1][0] +A[0][2]*B[2][0]  );k++;printf("\n");

            printf("%2d. Enter value of (A*B)[%d][%d] is  :%5d",1,1,A[0][0]*B[0][0] +A[0][1]*B[1][0] +A[0][2]*B[2][0]  );k++;printf("\n");
            printf("%2d. Enter value of (A*B)[%d][%d] is  :%5d",1,1,A[0][0]*B[0][0] +A[0][1]*B[1][0] +A[0][2]*B[2][0]  );k++;printf("\n");
            printf("%2d. Enter value of (A*B)[%d][%d] is  :%5d",1,1,A[0][0]*B[0][0] +A[0][1]*B[1][0] +A[0][2]*B[2][0]  );k++;printf("\n");

            printf("%2d. Enter value of (A*B)[%d][%d] is  :%5d",1,1,A[0][0]*B[0][0] +A[0][1]*B[1][0] +A[0][2]*B[2][0]  );k++;printf("\n");
            printf("%2d. Enter value of (A*B)[%d][%d] is  :%5d",1,1,A[0][0]*B[0][0] +A[0][1]*B[1][0] +A[0][2]*B[2][0]  );k++;printf("\n");
            printf("%2d. Enter value of (A*B)[%d][%d] is  :%5d",1,1,A[0][0]*B[0][0] +A[0][1]*B[1][0] +A[0][2]*B[2][0]  );k++;printf("\n");
        
    
//do later/
    
    return 0;
}