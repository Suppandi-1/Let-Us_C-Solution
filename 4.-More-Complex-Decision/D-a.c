#include<stdio.h>
    
int main()
{
    int yr;
    printf("Enter the value of year:\n");
    scanf("%d",&yr);

    if(yr%4==0 && yr%100==0 && yr%400==0) printf("leap year\n");
    else if (yr%4==0 && yr%100==0 && yr%400!=0) printf("not aleap year");
        
    else printf(" not Leap year \n");
    
    return 0;
}