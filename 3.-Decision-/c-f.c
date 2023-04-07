#include<stdio.h>
//youngest o three

int main()
{
    int ram, shyam , ajay;
    int a=ram;
    int b= shyam;
    int c= ajay;
    
    printf("enter the age of three ram , shyam ,ajay :");
    scanf("%d %d %d",&ram,&shyam,&ajay);
    if (a<=b||a<=c) printf("Youngest of three is Ram\n"); 
     else if(b<a||b<=c) printf("Youngest of three shyam\n" ); 
     else printf("Youngest of three is ajay\n"); 
    
    
    
    return 0;
}