#include<stdio.h>
#include<math.h>
    
int main()
{
    int x[] = {-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};//15
    int avg=0;
    for( register int i=0;i<15;i++){
        avg = avg + x[i];
        
    }
    avg = avg/15;
    int std =0 ;
    for( register int i=0;i<15;i++){
        std = std + (x[i] - avg)*(x[i]- avg) ;
    }
    std = sqrt(std);
    std = std/15;
    printf("std = %4d\n",std);

    
    return 0;
}