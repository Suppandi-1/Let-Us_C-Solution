#include<stdio.h>
#include<suppandi.h>    
int main()
{
    char ch;
    ch = getch();//wont show your typed letter just after type
    printf("\nthe value enterd is %c\n",ch);
    ch = getche();//will echo as well
    printf("\nthe value enterd is %c\n",ch);
    
    return 0;
}