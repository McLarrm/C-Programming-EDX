#include <stdio.h>

/**
 * main - Calculates percentage of boxes to be filled
 * Return: 0
 */
 int main(void){
     int matches, box, size;
     printf("Please enter the total amount of matches and the size of the box: ");
     scanf("%d", &matches);
     scanf("%d", &size);{
         box = matches/size;
         printf("Total box full of matches will be: %d\n", box);
         printf("Remaining matches will be: %d", matches%size);
     }
     return 0;
 }
