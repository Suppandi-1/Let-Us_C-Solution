#include<stdio.h>
    
int main()
{
    int size , num, i,j,k,numup;
     printf("Enter the size of set :");
    scanf("%d",&size);

    printf("Enter num:");scanf("%d",&num);k=num;j=num;
    for(i=1;i<size;i++){
        printf("Enter num:");scanf("%d",&num);
        numup=num;
        if(k<numup) k=numup;
        if(j>numup) j=numup;
    }
    printf("Range is : %d",k-j);
    
    return 0;
}