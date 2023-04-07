#include<stdio.h>//minimum number of notes required 
//RRR
    
int main()
{
    int N;
    printf(" Enter the value of N\n:");
    scanf("%d",&N);
    int num[6]={0,0,0,0,0,0},n;
    num[0] = N/100 ;
    n = N-100*num[0];
    num[1] = n/50;
    n = n - 50*num[1];
    num[2] = n/10;
    n= n-10*num[2];
    num[3] = n/5;
    n = n-5*num[3];
    num[4] = n/2;
    n= n-2*num[4];
    num[5] = n/1;

    printf("The minimum number of notes required is :%d\n", num[0]+num[1]+num[2]+num[3]+num[4]+num[5]);

    
    return 0;
}