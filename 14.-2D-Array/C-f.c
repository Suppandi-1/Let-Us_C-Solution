//match the following

/*

1 f
2 j
3 m
4

*/
//proof
#include<stdio.h>
    
int main()
{
    int x[3][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    int *n=&x;
    int i=1;

    printf("%d. %d\n", i,*(*(x+2)+1)   );i++;
    printf("%d. %d\n", i,*(*(x+2))+5   );i++;
    printf("%d. %d\n", i,*(*(x+1))     ) ;i++;
    printf("%d. %d\n", i,*(*(x)+2) + 1   );i++;
    printf("%d. %d\n", i,*(*(x+1)+3)   );i++;
    printf("%d. %d\n", i,*(n));i++;
    printf("%d. %d\n", i,*(n+2));i++;
    printf("%d. %d\n", i,(*(n+3)+1)   );i++;
    printf("%d. %d\n", i,(*(n+5)+1)   );i++;
    printf("%d. %d\n", i,++*n   );i++;
    
    return 0;
}