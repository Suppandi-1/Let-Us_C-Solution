#include<stdio.h>

int recive_marks(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int avg=(a+b+c)/3;
    int per=avg; //out of 100 marks avg are percentage
    return avg ;
}
    
int main()
{
    int res=recive_marks();
    printf("the precentage is %d\n",res);
    
    return 0;
}