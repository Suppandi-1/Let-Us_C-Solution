#include<stdio.h>
    #include<string.h>
int main()
{
    char *str[]={
        "We will teach you how to...",
        "Move a mountain",
        "Level a building",
        "Erase the past",
        "Make a million",
        "...all throuch C!"
    };
    char str1[20],str2[20];

    printf("Enter string1:");scanf("%s",str1);
    printf("Enter string2:");scanf("%s",str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    int cmp1;

    for( register int i =0;i<6;i++){
        cmp1 = strcmp(str[i],str1);
        if(cmp1==len1){
            //pending..
        }
    }

    
    
    return 0;
}