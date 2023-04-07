//leap year defination
//   a year if divisible by 4 ---yes---> leap year
//     |_---NO---> if divisible by 100 ----yes----> if deivisible by 400 ----->leap year
//                       \---no---> leapyear           \----no--> not leap year

#include<stdio.h>
    
int main()
{
    int yr;
    printf("Enter the value of year:\n");
    scanf("%d",&yr);

    if(yr%4==0){
        if (yr%100==0){
            if(yr%400) printf("leap year (i)\n");
            else printf(" not leap year(ii)\n");
        }
        else printf("Leap year (ii)\n");
    } 
    else printf(" not Leap year (i)\n");
    
    return 0;
}