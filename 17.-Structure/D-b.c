#include<stdio.h>
    struct Coustmer {
        int acc_no ;
        float bank_bal;
        char *name;

    };
int main()
{
    int i,j;
    int k;
    printf("%u  %u  %u\n",&i,&j,&k);
    // i have discovered that the order of decleration in a programme are also order of memory location 
    //i was just checking  ,i,j,k are not in array or struct but the three are in adjecent memory location
//back to the question
    
    struct Coustmer p[200];
    for( register int i=0;i<200;i++){//filling data of 200
        printf("Enter name :");scanf("%s",p[i].name);
        printf("Enter bank balance :");scanf("%f",p[i].bank_bal);
        printf("Enter account number :");scanf("%d",p[i].acc_no);
    }

    //1
    for( register int i=0;i<200;i++){
        if(p[i].bank_bal<100){
            printf("%s\n",p[i].name);
        }
    }
    
    //2
    int acc,v;
    float bal;
    printf("Enter account number :");scanf("%d",acc);
    printf("Enter ammount : ");scanf("%f",bal);
    printf("Withdarwl(0), Deposit (1) ");scanf("%d",v);
    if(v==0){

    for( register int i=0;i<200;i++){
        if(p[i].bank_bal<100){printf("The balance is insufficent for specific withdrawl\n");}
        else if(p[i].bank_bal<bal){printf("bank balance is less than ammount you entered\n");}
        else{ printf("Wait ,....withdrawing......\n");}
    }
    }
    return 0;
}