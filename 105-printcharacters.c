Write a C-program that reads an input character (using scanf) and displays the following pyramid pattern using the character read:

#include <stdio.h>

/**
 * main - Displays character input from user
 *
 * Return: 0
 */
 int main(void){
          char letter1, letter = '+';

          printf("Please enter a input character: ");
          scanf("%c", &letter1);{
              printf("%c%c%c%c%c%c%c%c%c\n", letter, letter, letter, letter, letter1, letter, letter, letter, letter);
              printf("%c%c%c%c%c%c%c%c%c\n", letter, letter, letter, letter1, letter1, letter1, letter, letter, letter);
              printf("%c%c%c%c%c%c%c%c%c\n", letter, letter, letter1, letter1, letter1, letter1, letter1, letter, letter);
              printf("%c%c%c%c%c%c%c%c%c\n", letter, letter1, letter1, letter1, letter1, letter1, letter1, letter1, letter);
              printf("%c%c%c%c%c%c%c%c%c", letter1, letter1, letter1, letter1, letter1, letter1, letter1, letter1, letter1);
          }

          return 0;
 }
