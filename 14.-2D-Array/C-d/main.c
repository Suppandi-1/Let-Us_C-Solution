
#include"Functions.h"
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"


int main(){
    int t=2;
    int count = 0;
    
    while(t!=0){
        system("cls");
        Checkstaus(&t);
        if(t==2){
            printf(" \t\t\t  *SOLUTION by SUPPANDI*\n\n\n");
        }
        else if (t==1){
            printf(" \t\t\t  *SOLUTION by SUPPANDI*\n");
            printf("\t\t\t  ERROR INPUT--><--\n\n");
        }
        else if(t==0){
            printf(" \t\t\t  *SOLUTION by SUPPANDI*\n");
            printf("\t\t  PLEASE MAINTAIN CURSOR INSIDE--><--\n\n");
        }   
        Bord();
        printf("\nArrange the numbers in acending order you can move \'0\' as console\nIF numbers are in acending order row-wise/column-wise then you will win\n\t Adjust console by using \nUP---->(w)\nDOWN-->(s)\nLEFT-->(a)\nRIGHT->(d)\t:");
        if(t!=0){
        Reciveconsole(&t, &count);
        }
        else{
            printf("\n\n\n\t****YOU WON BY USING %d STEPS***** \n\n",count);
        }


    }
    return 0;
}