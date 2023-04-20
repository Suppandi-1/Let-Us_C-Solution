#include<stdio.h>
#include"/home/ddaku-mint/Desktop/CODE/LET-US-C/12-C-Preprocessor/aperperi.h"
int main()
{
    int area_of_circle=Area_circ(20);
    int area_of_sq = Area_sruare(5);
    int area_of_tri =Area_tri(3,2,4,3,5,7);

    int peri_of_circ = PERI_circ(10);
    int peri_of_sq = PERI_sq(5);
    int peri_of_tri = PERI_tri(1,2,3,4,5,6);

    
    printf("%d %d %d %d %d %d ",area_of_circle,area_of_sq,area_of_tri,peri_of_circ,peri_of_sq,peri_of_tri);
    return 0;
}