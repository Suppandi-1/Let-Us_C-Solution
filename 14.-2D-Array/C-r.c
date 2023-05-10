#include<stdio.h>
#define SIZE 10
int garb[SIZE];
void exceptionalcase(int *de, int* k){
    int count=0;

    for( register int i=0;i<SIZE;i++){
        if((de+i-1)==garb[i]){count++;}
    }
    if(count==SIZE){ *k =1;}
    printf("Exceptoonal case Que full\n");

}
void leftinser (int *de, int val){
    // int dequeu[SIZE];
    int temp,k=0;
    exceptionalcase(*de ,k);
    if(k=0)
    for( register int i=0;i<SIZE;i++){
        
        if(*(de+i+1)==garb[i]){
            *(de+i)=*(de+i);
        }
        
    }
}
void rightinser (int *, int ){
    int dequeu[SIZE];
    int *right = dequeu -SIZE -1;

}
void leftret (int *, int ){
    int dequeu[SIZE];
    int *left = dequeu;

}
void leftret (int *, int ){
    int dequeu[SIZE];
    int *left = dequeu -SIZE -1;

}
    
int main()
{
    int dequeu[SIZE];
    for( register int i=0;i<SIZE;i++){
        dequeu[i]=garb[i];
    }
    int *left = dequeu;
    int *right = (dequeu + SIZE -1);

    leftinsert(dequeu,12 );
    

    
    return 0;
}//pending