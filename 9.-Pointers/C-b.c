#include<stdio.h>

void recive_marks(int *p){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    *p= (a+b+c)/3;
    
}
    
int main()
{
    int res, per;
    recive_marks(&per);
    printf("the precentage is %d\n",per);
    
    return 0;
}