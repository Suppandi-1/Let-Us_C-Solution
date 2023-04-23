
#include<stdio.h>
#define siz 5
#define siz2 4

void shif2(int *arr){
    int temp1, temp2;
    temp1=*arr; 
    temp2=*(arr+1); 
    *(arr+0) = *(arr+2);
    *(arr+1) = *(arr+3);
    *(arr+2) = *(arr+4);
    *(arr+3) = temp1;
    *(arr+4) = temp2;
}
    
int main()
{
    int A[siz] = { 15 ,30 ,28 ,19 ,61 };
    
        printf("array a is now \n{ ");
    for( register int i=0;i<siz;i++){
        printf("%d ,",A[i]);
    }
    printf("\b}\n");

    printf("\n");

    shif2( A) ;
        printf("array a is now \n{ ");
    for( register int i=0;i<siz;i++){
        printf("%d ,",A[i]);
    }
    printf("\b}\n");
    return 0;
}