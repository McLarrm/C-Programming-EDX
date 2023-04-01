#include <stdio.h>

/**
 * main - Convert Celcius to Fahrenheit
 * Return: 0
 */
 int main(void){
     double Celc, Fahren;
     printf("Please enter temperature in Celcius: ");
     scanf("%lf", &Celc);{
         Fahren = Celc*9.0/5.0+32.0;
         printf("The temperature in Fahrenheit is: %.1lf", Fahren);
     }
     return 0;
 }
