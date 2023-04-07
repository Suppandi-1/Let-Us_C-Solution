#include<stdio.h>
//Sum of five digit numbers
int main()
{
    printf("Enter a five digit number\n");
    int num;
    scanf("%d",&num);

    int o, t,h, th,tth,l;
    l= num-(num%100000);
    tth= (num%100000) -(num%10000);
    th= (num%10000) -(num%1000);
    h = (num%1000) -(num%100);
    t = (num%100) -(num%10);
    o = (num%10) -(num%1);

    int sum;
    sum = l/100000 +tth/10000 +th/1000 +h/100 +t/10 +o/1;

    printf("Sum of the digits is : %d\n",sum);

}