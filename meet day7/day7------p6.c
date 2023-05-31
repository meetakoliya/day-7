#include<stdio.h>
 
int main() {
   int gross_salary, basic, hra, da, ta;
 
   printf("Enter basic salary : ");
   scanf("%d", &basic);
   
   hra= (10 * basic) / 100;
   da = (5  * basic) / 100;
   ta = (8  * basic) / 100;
 
   gross_salary = basic + hra + da + ta;
 
   printf("\nGross salary : %d", gross_salary);
   return (0);
}
