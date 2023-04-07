#include<stdio.h>
int main ()
{
    int num, a, b, c, d, e, z, rev ;
    printf("type ypur number");
    scanf("%d",&num) ;
    a = num/10000;
    b = num/1000 -a*10 ;
    c = num/100 - b*10 -a*100 ;
    d = num/10 - c*10 - b*100 -a*1000 ;
    e = num - d*10 - c*100 - b*1000 -a*10000 ;
    z = a + b + c + d + e ;
    printf(" first term is %d\n second is %d\n third is %d\n fourth is %d\n fifth is %d\n and sum of digits is %d\n",e,d,c,b,a,z);
    rev = 10000*e +1000*d +100*c +10*b +a ;

    if(a==e)
    {
        if(b==d)
        printf(" the original and its reverse are same\n ");
    }
    printf("reverse of the number you enterd is %d ", rev ) ;
    return 0;
}