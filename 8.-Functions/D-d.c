//use logic of chapter 3 C-c.c
//file

#include<stdio.h>

void lp_yr_detection();
    
int main()
{
    
    int yr;
    printf("Enter the value of year:\n");
    scanf("%d",&yr);

    void lp_yr_detection(yr);
    
    return 0;
}

void lp_yr_detection(int yr){
   
    if(yr%4==0){
        if (yr%100==0){
            if(yr%400) printf("leap year (i)\n");
            else printf(" not leap year(ii)\n");
        }
        else printf("Leap year (ii)\n");
    } 
    else printf(" not Leap year (i)\n");
}
