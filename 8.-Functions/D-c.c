#include<stdio.h>

void roman(int);
    
int main()
{
    int yr;
    scanf("%d",&yr);
    printf("Roman equivalent of year %d is : ",yr);
    roman(yr);
    
    return 0;
}

void roman(int y){
    int o,t,h,th;
    th = y/1000 ;
    h= (y-th)/100;
    t= (y -th -h)/10;
    o= y%10;

    if(th<5){printf("M");}
    
    if(h>5){printf("D");}
    //pending.....
}