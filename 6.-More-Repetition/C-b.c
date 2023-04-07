//filling entire screen with smiling faces
//assuming average linux bash size = 80*24
// we need 80*24 smiling faces
#include<stdio.h>
    
int main()
{
    for(int i=0;i<24*80;i++){
        printf("%c",1);
    }    
    return 0;
}
//Ascii value is not working 
//insted use "\u263A" as string