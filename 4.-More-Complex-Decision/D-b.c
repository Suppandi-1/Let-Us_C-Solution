#include<stdio.h>
    
int main()
{
    char ch;
    printf("Enter value to get in char data type:\n");
    scanf("%c",&ch);

    if(ch<=90 && ch>=65) printf("Captial letter alpha..\n");
    if(ch<=122 && ch>=97) printf("small letter aplha..\n");
    if(ch<=57&&ch>=48) printf("numerical value\n");
    if((ch>=0 && ch<=47)||(ch>=58&&ch<=64)||(ch>=91&& ch<=96)||(ch>=123 && ch <=127)) printf("Special cherecter\n");
    
    
    return 0;
}