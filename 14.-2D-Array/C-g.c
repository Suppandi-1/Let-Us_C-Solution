//proof

#include<stdio.h>
    
int main()
{
    unsigned int arr[3][3]={    2,4,6,   9,1,10,  16,64,5   };

    printf("%d\n\n", *(*(arr +1) +2));   // means   arr[  1d array no.][element no ] 

    int i=  1;

    printf("%2d  %d\n",i,**arr); i++;
    printf("%2d  %d\n",i,**arr < *(*arr +2)); i++;
    printf("%2d  %d\n",i,*(*arr+2)/(*(*arr+1) > **arr ) ); i++; // misprint corrected by me 
    printf("%2d  %d\n",i,*(arr[1]+1)|arr[1][2]); i++;
    printf("%2d  %d\n",i,*(arr[0]) | *(arr[2]) ); i++;  // i guess | means add      2 | 16
    printf("%2d  %d\n",i,arr[1][1] < arr[0][1] ); i++;  // true 
    printf("%2d  %d\n",i,arr[2][1] & arr[2][0] ); i++;  // if not same then & give 0 else the number
    printf("%2d  %d\n",i,arr[2][2] | arr[0][1] ); i++;  // but here it means bigger one  5 | 4   hence may be it means  a|b = a if a>b else a+b if b>a
    printf("%2d  %d\n",i,arr[0][1] ^ arr[0][2] ); i++;  // 4 ^ 6 = 2 may be subtraction but may also be like this       a^b = a if a>b else b-a if b>a
    printf("%2d  %d\n",i,++**arr + --arr[1][1] ); i++;  // (2+1) + (1-1) = 3

    //take examples of |  ^ 
    printf ("\n 2|3= %d\n 2|3= %d\n",2|3,2|16); // seems like bigger  on fo a and b
    printf ("\n 2^3= %d\n 3^2= %d\n",2^3,3^2); // seems like difference of a and b
    // these are bitwise operator i have to understand it



    
    return 0;
}
