#include<stdio.h>//workin
int main()
{
    int i=0,j, arr[25];
    while(i<=24)
    {
        printf("\nEnter the value for A(%d)\n:",i);
        scanf("%d",&arr[i]);
        if (i+1==25)
        break;
        i=i+1;
    }    // array filling done
    //now searching 
    i=25;

    if(i==25)
    {
        int k,n=0;
        printf("\nEnter the no. to search\n:");
        scanf("%d",&j);
        for(k=0;k<=24;k++)
        {
        if(arr[k]==j)
        {
            printf("it exist at k=%d\n",k);
            n=n+1;
        }
        }
        printf("It exist %d times",n);
    }
    return 0;
}