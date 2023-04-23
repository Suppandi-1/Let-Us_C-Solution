#include<stdio.h>
    #include<string.h>
int main()
{
    char (ch[7])[10], ptr1[10] ,ptr2[10];

    strcpy((ch[0]),"a"); strcpy((ch[1]),"b");
    
    for( register int i=0;i<4;i++){
        strcpy(ptr2,(ch[i+1]));
        strcpy(ptr1,ch[i]);
        strcat(ptr2,ptr1);
        strcpy(ch[i+2],ptr2);
    }
    
    for( register int i=0;i<6;i++){
        printf("%s\n",ch[i]);
    }
    return 0;
}