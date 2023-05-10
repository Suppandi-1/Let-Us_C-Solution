#include<stdio.h>
#include<string.h>
    struct AUTO_PARTS {
        
        char n,ch1,ch2;
        char *serial;

        int year_of_man;
        int quantity_man;
        char *material;
    };
int main()
{
    struct AUTO_PARTS p[360];
    //setting serail number
    for( register int k=0;k<6;k++){
        for( register int j=0;j<6;j++){
            for( register int i=0;i<10;i++){
                p[i+j+k].n=48 +i;
                p[i+j+k].ch1=65+j;
                p[i+j+k].ch2=65+k;
                p[i+j+k].serial = { 'p[i+j+k]ch2','p[i+j+k].ch1','p[i+j+k].n)','\0'};
            }
        }
        
    }
    //code for getting info 
    //codes for retriving data
    //pendingS
    
    return 0;
}