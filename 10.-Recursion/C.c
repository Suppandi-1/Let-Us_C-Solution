#include<stdio.h>
int main()
{
    int a=1,b=1,c,d,e,f,i,j=2,k;
    char A,B,C,D ,p,q,r;
    while(a!=4)
    {
        
    
        printf("\n\nSelect an operation by its number\n\n1). Factorial of a number\n2). Check prime or not\n3). Check odd or even\n4). EXit\n:");
        scanf("%d",&a);
        switch (a)
        {
            case 1:
                printf("\nEnter a natural number\n:");
                scanf("%d",&c);
                for(i=2;i<=c;i++)
                {
                    b=b*i;
                }
                printf("\nFactorial is :%d\n",b);
                break;
            case 2:
                printf("enter a natural number\n:");
                scanf("%d",&d);
                while(j<=d-1)
                {
                    if(d%j==0)
                    {
                        printf("Not Prime\n");
                        break;
                    }
                    j++;
                }
                if(j==d)
                printf("It is prime\n");
                break;
            case 3:
                printf("enter a natural number\n:");
                scanf("%d",&c);
                if(c%2==0)
                printf("Even number");
                else
                printf("Odd number");
                break;
            case 4:
                break;
            default:
            printf("please provide approprite option 1 or 2 or 3 or 4");
            a!=4;
        }
    }
    return 0;
}