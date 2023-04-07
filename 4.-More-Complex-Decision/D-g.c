#include<stdio.h>
#include<math.h>
    
int main()
{
    float R,G,B;
    float C, M ,K ,Y;
    float w;
    printf("Enter the value of R , G , B :\n");
    scanf("%f %f %f",&R, &G,&B);

    w = fmax( fmax(R/255 , G/255) , B/255);
    C = (w- R/255)/w;
    M = (w- G/255)/w;
    Y = (w- Y/255)/w;
    K= 1-w;

    printf("In cmyk system colour tiue=rns out to be %f %f %f %f\n",C,M,Y,K);
    

    
    return 0;
}