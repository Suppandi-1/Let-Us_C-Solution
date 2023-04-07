#include<stdio.h>
    
int main()
{
    int a,b,v=1;
    scanf("%d %d",&a,&b);
    for(int i=0; i<b;i++){
        v=v*a;
    }
    printf("%d\n",v);
    
    return 0;
}