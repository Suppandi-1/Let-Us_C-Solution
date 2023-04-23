#include<stdio.h>
    #include<string.h>
    int pw(int x){
        int ten=10;
        for( register int i=0;i<x;i++){
            ten = ten*10;
        }
        return ten;
    }
int main()
{
    int isbn;
    printf("Enter a 10 digit integer :");scanf("%d",&isbn);
    int d[10],sum=0;
    d[0]=isbn%(10);
    for( register int i=1;i<10;i++){
        d[i]=isbn%pw(i) - d[i-1];
    }

    for( register int i=0;i<10;i++){
        sum=sum + (i+1)*d[i];
    }

    if(sum%11==0){printf("correnct sbin no.\n");}
    else {printf("incorrect\n");}

    
    return 0;
}