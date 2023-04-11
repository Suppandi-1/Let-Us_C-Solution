#include<stdio.h>
    
int main()
{
    int k=0,size;
    scanf("%d",&size);
    for (int i=0; i<=size;i++){
        printf("%d",i);

        if(i == k*(k+1)/2){
            printf("\n");
            if(size%2==0){
                for(int j=size/2  +size/4;j>i;j--){
                    printf(" ");
                }
                k++;
            }
            else{
                for(int j=(size +1)/2 +size/4;j>i;j--){
                    printf(" ");
                    }
                k++;
            }
        }

        else if(i!= k*(k+1)/2) { 
            printf("   ");
            }
    }
    
    printf("\n");
    return 0;
    //even you can put 100 not just limited to 10
    // spacing is not well maanged - fell free to contribute if you know another meathod in any question
    //
    //results are qite funny and intrustiong when you give size like 100 ,1000, and more 
}