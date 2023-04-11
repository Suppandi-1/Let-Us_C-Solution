#include<stdio.h>
#include<math.h>

void function(float *a ,float *b ,float *c){

    int i,j,k,l,m;

    scanf("%d %d %d %d %d",&i,&j,&k,&l,&m);

    *a = (float)( i+j+k+l+m);
    *b = (*a)/5;
    *c = sqrtf( (i*i + j*j +k*k + l*l + m*m)/5   -  (*b)*(*b));
}
    
int main()
{
    float sum,avg,std;
    function(&sum,&avg,&std);

    printf(" value of  sum average and std dev is %f %f %f\n",sum ,avg,std );

    
    return 0;
}