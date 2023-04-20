#include"intrest.h"
int main(){
    int principal =20000;
    int rate = 4;
    int time = 5;

    int simple_intrest = SIMP_INT(principal,rate,time);
    int principal_Ammount = AMMOUNT(principal,rate,time);

    printf(" %d %d \n" ,simple_intrest,principal_Ammount);

    return 0; 


}