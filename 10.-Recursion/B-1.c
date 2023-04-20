#include<stdio.h>
    
int sum_of_digits(int i){
    int a, b, c;
    int sum = i%10;
    if(i%10==0){return 0;}
    else {
        sum = sum + sum_of_digits((i-(i%10))/10);
        
        
    }
    return sum;

}
int main()
{
    int i,sum;
    printf("Enter a five digit number:");
    scanf("%d",&i);
    sum= sum_of_digits(i);
    printf("Sum of digits is: %d",sum);
    
    return 0;
}