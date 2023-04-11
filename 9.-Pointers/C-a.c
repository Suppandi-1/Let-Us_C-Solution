#include<stdio.h>
#include<math.h> //without pointer solution
int sum_of(int, int , int ,int,int);
float avg(int, int , int ,int,int);
float st_dev(int, int , int ,int,int);
    
int main()
{
    int a,b,c,d,e;

    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    int sum = sum_of(a,b,c,d,e);
    float avrg= avg(a,b,c,d,e);
    float st= st_dev(a,b,c,d,e);

    printf("The sum is : %d\nThe average is : %f\nThe standard deviation is : %f\n",sum,avrg,st);
    
    return 0;
}
int sum_of(int a, int b, int c ,int d,int e){
    return (a+b+c+d+e);
}
float avg(int a, int b, int c ,int d,int e){
    return (  (float)(  sum_of(a,b,c,d,e)/5  )  );
}
float st_dev(int a, int b, int c ,int d,int e){
    return (   sqrtf(  (a*a +b*b +c*c +d*d +e*e)/5  - pow((avg(a,b,c,d,e)),2)   )    );
}
    