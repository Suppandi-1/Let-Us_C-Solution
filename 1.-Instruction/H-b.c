#include<stdio.h>
// reverse of a five digit numbers
int main()
{
    int num;
     int o, t,h, th,tth,l;
    printf("Enter five digit number :\n");
    scanf("%d",&num);

    // l= num-(num%100000);
    tth= (num%100000) -(num%10000);
    th= (num%10000) -(num%1000);
    h = (num%1000) -(num%100);
    t = (num%100) -(num%10);
    o = (num%10) -(num%1);

    int reve_num;
    reve_num= tth/10000 +th/100 +h +t*100 +o*10000;
    printf("The reverse of the number is %d\n",reve_num);
    
    return 0;
}