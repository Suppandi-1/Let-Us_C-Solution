#include<stdio.h>
    
int main()
{
    for(int j=1;j<=7;j++){
        for(int i=1;i<14;i++){
            if((i==1||(14-i)==1)&&(j<=7)){
            printf("A"); if(14-i==1){printf("\n");}}
            else if((i==1||(14-i)==1)&&(j>7)){printf(" ");}

            if((i==2||(14-i) ==2)&&(j<=6)){
            printf("B");}
            else if((i==2||(14-i) ==2)&&(j>6)){printf(" ");}

            if((i==3||(14-i) ==3)&&(j<=5)){
            printf("C");}
            else if((i==3||(14-i) ==3)&&(j>5)){printf(" ");}
            
            if((i==4||(14-i) ==4)&&(j<=4)){
            printf("D");}
            else if((i==4||(14-i) ==4)&&(j>4)){printf(" ");}
            
            if((i==5||(14-i) ==5)&&(j<=3)){
            printf("E");}
            else if((i==5||(14-i) ==5)&&(j>3)){printf(" ");}
            
            if((i==6||(14-i) ==6)&&(j<=2)){
            printf("F");}
            else if((i==6||(14-i) ==6)&&(j>2)){printf(" ");}
            
            if((i==7||(14-i) ==7)&&(j<=1)){
            printf("G");}
            else if((i==7||(14-i) ==7)&&(j>1)){printf(" ");}
            
            
    
        }
    }
    //other solutions and suggestions are welcomed
    return 0;
}