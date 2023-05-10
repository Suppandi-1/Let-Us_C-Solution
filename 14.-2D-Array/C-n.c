#include<stdio.h>
#include<math.h>
    
int main()
{
    
    double a[6][5] ={      
        1  ,134.5 , 80.9 , 0.78, 0,
        2  ,155.2 , 92.62, 0.89, 0,
        3  ,149.3 , 97.93, 1.35, 0,
        4  ,160.0 ,100.25, 9.00, 0,
        5  ,155.6 , 68.95, 1.25, 0,
        6  ,149.7 , 120   ,1.75, 0,
    };

printf("Array area[\n");
    for( register int i=0;i<6;i++){
        a[i][4]= .5* a[i][1]*a[i][2]*sin(a[i][3]);
        printf( "%.2f ," ,a[i][4]);
    }
    printf("\b}\n");
    


    
    return 0;
}