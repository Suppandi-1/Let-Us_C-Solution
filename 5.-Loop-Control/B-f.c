#include<stdio.h>

    
    // logic is that five 5 match sttics are picked up together 
    // then the last one pickker will be beiginer one

int main()
{
    int i,a;
    int match_stick=21;
    char s;
    printf("There are 21 match stick\n");
    printf("WHo ever will be forced to pickup lasr matchstic will lose game mut have to chose non zero match sticks \n\n");

    printf("for start press s\n");
    scanf("\n");
    scanf("%c",&s);
    if(s=='s'||s=='S'){
        system("clear");

    while(match_stick>=4){
        fflush(stdin);
     printf("        matchstick left %d\n",match_stick);
     printf("your turn : Pick up 1 , 2, 3or 4 matchsticks:");
     scanf("%d",&a);
     match_stick=match_stick-a;
     printf("        matchstick left %d\n",match_stick);
     printf("Computer chose %d match sticks : matchstick left :%d \n\n",5-a , match_stick-5+a);
     match_stick=match_stick-5+a;
    
    
    }
    if(match_stick<=3) printf("\n You Loose NIGGA!!\n");
    }
    
    
    return 0;
}