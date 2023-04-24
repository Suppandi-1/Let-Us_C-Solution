#include<stdio.h>
    struct student{
        int roll_no,yr_of_join;
        char *name,*dep,*course;
    };
int main()
{
    struct student s[450];
    
    //codes for filling data in s[]

    //after filling data

    //1
    printf("Enter the perticular year\n");
    int year;
    scanf("%d",year);
    for( register int u=0;u<450;u++){
        if(s[u].yr_of_join = year){printf("%s\n",s[u].name);}
    }printf("\n");

    //2
    printf("Enter the Roll number :\n"); int roll;
    scanf("%d",roll);
    for( register int i=0;i<450;i++){
        if(s[i].roll_no==roll){
            printf("Roll number %5d\n",s[i].roll_no);
            printf("Year of joining %4d\n",s[i].yr_of_join);
            printf("Name of studen  %s \n",s[i].name);
            printf("Department : %s\n",s[i].dep);
            printf("Course : %s\n",s[i].course);
        }
    }


    return 0;
}