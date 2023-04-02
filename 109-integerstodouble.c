#include <stdio.h>

/**
 * main - Calculates the averages of input numbers
 * Return: 0
 */
 int main(void){
     int iOne, iFour, sum = 0;
     double average;
     printf("Please enter the amout of students to be graded: ");
     scanf("%d", &iFour);
     for (int i = 0; i < iFour; i++){
         printf("Enter the grades of each students: ");
         scanf("%d", &iOne);
         sum = sum+iOne;
     }
         average = (double) iFour;
         printf("The average overall grade is : %.2lf", sum/average);
     return 0;
 }
