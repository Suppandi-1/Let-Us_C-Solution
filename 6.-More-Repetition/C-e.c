#include<stdio.h>
    
int main()
{
    int life_mech;
    float time;
    int earning;
    int ammount=6000;


    
    for(int t=1;t<100;t++){
        //profit per anum avg =earning
        earning = (1000*t +2000); 
        if(earning >= (60*9 +6000) ) {printf("%d\n",t); break;} 
    }
    
    return 0;
}
