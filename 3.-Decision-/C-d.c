//fist day of year
#include<stdio.h>
#include<math.h>
    //wrong solution
    //solution pending
int main()
{
    int yr, yr_dif, n_lp ,n_non_lp;
    yr_dif=(yr-2001);
    n_lp  =yr_dif/4 +1;
    n_non_lp= yr_dif-n_lp;
    printf("enter the value of yr:");
    scanf("%d",& yr);
    
    int num_day = n_lp*366 +n_non_lp*365 +1;
    if(num_day%7==0) printf("monday\n");
    else if(num_day%7==1) printf("tuesday\n");
    else if(num_day%7==2) printf("wednesday\n");
    else if(num_day%7==3) printf("thrusday\n");
    else if(num_day%7==4) printf("friday\n");
    else if(num_day%7==5) printf("satday\n");
    else if(num_day%7==6) printf("sunday\n");
    
    return 0;
}