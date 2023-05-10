//#include"Global.h"
#include<stdio.h>
#include<conio.h>
//i have modified my library by adding suppandi.h 
//in windows use conio.h instead 
//for linux user comment the above #include<suppandi.h>
//and uncomment below line
//
//#include"suppandi.h"

int cr1=4,cr2=4;

int value_p[4][4] = {   {1,4,15,7},
                        {8,10,2,11},
                        {14,3,6,13},
                        {12,9,5,0}    };
int *ptr;
#define B(x,y) (*(*(value_p+x)+y))


void Bord(){
    register int k=0,l=0;
    for( register int i=0;i<17;i++){
        printf("\t\t");
        if(k==4){
            k=0;
            l++;
        }
        for( register int j=0;j<21;j++){
            if(i%4==0 ||j%5==0){
                printf("* ");
            }
            else if(((i+2)%4==0) && ((j+2)%4==0)){
                //printf("%c%c",value_t[l][k],value_o[l][k]);
               // if(k==3&&l==3){printf("_");}

                 {printf("%2d",value_p[l][k]);
                k++;}
            }
            else {
                printf("  ");
            }
        }
            printf("\n");   
        }
    }

void Reciveconsole(int *t , int *count){
    int orgcr1 = cr1-1;
    int orgcr2 = cr2-1;
    char ch;
    int temp;
                printf("(%d ,",cr1);
                printf("%d)",cr2);
    ch = getch();
    
        
            switch(ch){

            case('w'):
            {//means up

            if(cr1>1){
                temp=value_p[orgcr1][orgcr2];
                value_p[orgcr1][orgcr2]=value_p[orgcr1-1][orgcr2];
                value_p[orgcr1-1][orgcr2]=temp;
                cr1=cr1-1;
                *t=2;
                *count=*count+1;
                break;
            }
            else{*t=3;break;}
            }
            case('s'):
            {//means down
            if(cr1<4){

                temp=value_p[orgcr1][orgcr2];
                value_p[orgcr1][orgcr2]=value_p[orgcr1+1][orgcr2];
                value_p[orgcr1+1][orgcr2]=temp;
                cr1=cr1+1;
                *count=*count+1;
                *t=2;
                break;
            }
            else{ *t=3;break;}
            }
            case('a'):
            {//means left
            if(cr2>1){

                temp=value_p[orgcr1][orgcr2];
                value_p[orgcr1][orgcr2]=value_p[orgcr1][orgcr2-1];
                value_p[orgcr1][orgcr2-1]=temp;
                cr2=cr2-1;
                *count=*count+1;
                *t=2;
                break;
            }
            else{*t=3;break;}
            }
            case('d'):
            {//means right
            if(cr2<4){

                temp=value_p[orgcr1][orgcr2];
                value_p[orgcr1][orgcr2]=value_p[orgcr1][orgcr2+1];
                value_p[orgcr1][orgcr2+1]=temp;
                cr2=cr2+1;
                *count=*count+1;
                *t=2;
                break;
            }
            else{*t=3;break;}
            }
            default:{//means error
                *t=1;//means error
            }
            }
}

void Checkstaus(int*t){
    register int k;
    ptr = ((*value_p+0)+0);

    
if( ( ( B(0,0)<=B(0,1)&&B(0,1)<=B(0,2)&&B(0,2)<=B(0,3) ) && ( B(1,0)<=B(1,1)&&B(1,1)<=B(1,2)&&B(1,2)<=B(1,3) ) && ( B(2,0)<=B(2,1)&&B(2,1)<=B(2,2)&&B(2,2)<=B(2,3) ) && ( B(3,0)<=B(3,1)&&B(3,1)<=B(3,2)&&B(3,2)<=B(3,3) ) )   ||    ( ( B(0,0)<=B(1,0)&&B(1,0)<=B(2,0)&&B(2,0)<=B(3,0) ) && ( B(0,1)<=B(1,1)&&B(1,1)<=B(2,1)&&B(2,1)<=B(2,1) ) && ( B(0,2)<=B(1,2)&&B(1,2)<=B(2,2)&&B(2,2)<=B(3,2) ) && ( B(0,3)<=B(1,3)&&B(1,3)<=B(2,3)&&B(2,3)<=B(3,3) ) )   ){
    *t=0;
}

}