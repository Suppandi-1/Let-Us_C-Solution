#include<stdio.h>
#include<math.h>
    
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a ,&b,&c);

    if((a<(b+c))&& (b<(a+c)) && (c<(a+b))) {
        if(a==b &&b ==c &&c==a) printf("Equilateral\n");
        else if((a==b )|| (a==c ) ||(c==b)) printf("Isoscales\n");
        else printf("Scalen ");

        if((a ==sqrt(b*b +c*c))|| (b==sqrt(c*c + a*a)) || (c==sqrt(b*b + a*a)))printf("Reight angled\n");
    }
    else printf("No such triangle exist\n");
    
    return 0;
}