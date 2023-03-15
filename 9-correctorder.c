/*Please arrange the following program segments in the correct order so that it prints "I love love love programming!"

Then use comments to label the pieces of the program (preprocessor directive, variable declaration, executable statement, return statement, main function).

    printf("I ");

    for(i = 0; i < 3 ; i++) {
        printf("love ");
    }

    return(0);

    printf("programming!");

    #include <stdio.h>

}

int main(void){

    int i;*/
#include <stdio.h>

/**
 * main - Printing i love love love programming
 *
 * Return: 0
 */
 int main(void)
 {
     int i;

     printf("I ");
     for (i = 0; i < 3; i++)
     {
     printf("love ");
     }
     printf("programming!");

     return (0);
 }
