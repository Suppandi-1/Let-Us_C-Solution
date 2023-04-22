#include<stdio.h>
#include"suppandi.h"
    
int main()
{
    char c;
  printf("(getche example) please type a letter: ");
  c = getche();
  printf("\nYou typed: %c\n", c);
  printf("(getch example) please type a letter...");
  c = getch();
  printf("\nYou typed: %c\n", c);
    
    return 0;
}