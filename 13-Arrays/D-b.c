#include<stdio.h>
static int temp =0;
void recursion(int *, int );

void setvalue(int* arr){
    for(register int i=0;i<25;i++){      
    printf("Enter the value of %dtd :",i);
    scanf("%d",arr);
    arr++;
    }
}


void selection_sort(int *arr){
    int brr[25];
    for(register int i=0;i<25;i++){ brr[i]=arr[i]; }

    for(register int l=0;l<24;l++){
        for(register int j=(l+1);j<25;j++){
        if( *(brr+l)<*(brr+j)){
            temp =*(brr+l) ; *(brr+l)=*(brr+j); *(brr+j)=temp; 
        } 
    }
    
    }
    for(register int k=0;k<25;k++){
        printf("%d ,",*(brr+k));
    }
    printf("\n");
}

void bubble_sort(int *arr){
    int brr[25];
    for(register int i=0;i<25;i++){ brr[i]=arr[i]; }

    for(register int m=0;m<24;m++){
    for(register int l=0;l<24;l++){

        if(*(brr+l)<*(brr+l+1)){ 
            temp =*(brr+l) ; *(brr+l)=*(brr+l+1); *(brr+l+1)=temp; 

        }
    }
    }
    for(register int k=0;k<25;k++){
        printf("%d ,",*(brr+k));
    }
    printf("\n");
}


void recursion(int *brr ,int k){
    for(register int l=0;l<k;l++){
        if(*(brr+l)<*(brr+l+1)){ 
            temp =*(brr+l) ; *(brr+l)=*(brr+l+1); *(brr+l+1)=temp;
            recursion(brr,l);
        }
    }
}
void insertion_sort(int *arr){
    int brr[25];
    for(register int i=0;i<25;i++){ brr[i]=arr[i]; }
    
    recursion(brr,24);
    
    for(register int k=0;k<25;k++){
        printf("%d ,",*(brr+k));
    }
    printf("\n");
    

}

    

int main()
{
    int arr[25];
    setvalue( arr );
    printf("\n");
    selection_sort( arr );

    bubble_sort(arr);

    insertion_sort(arr);

    
    return 0;
}