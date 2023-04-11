#include<stdio.h>
void func(int *A,int*b,int*c){
    int temp;
    temp = *c;
    *c = *b;
    *b = *A;
    *A = temp;

}
    
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    func(&a,&b,&c);
    printf("%d %d %d\n",a,b,c);
    
    return 0;
}