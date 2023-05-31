#include<stdio.h>
int main()
{
    float fahrenheit, celsius;
    printf("enter the celsius:");
    scanf("%f",&celsius);
    
    fahrenheit =( (celsius*9)/5)+32;
    printf("Temperature in fahrenheit is: %f",fahrenheit);
    return 0;
}
