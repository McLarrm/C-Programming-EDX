#include <stdio.h>

/**
 * main - Converts kilometres to miles
 * Return: Nothing
 */
 int main(void){
     double kilometres, miles = 0.621371;
     
     printf("Please enter the total distance traveled in kilometres: ");
     scanf("%lf", &kilometres);{
         miles = miles*kilometres;
         printf("Your total destination traveled in miles is: %.2lf", miles );
     }
     return 0;
 }
