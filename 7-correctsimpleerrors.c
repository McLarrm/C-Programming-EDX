/*Our developer has written a program, but some of the code is missing! Can you help fix the code?

#include <stdio.h>

int main(void) {

    int i;

    printf("+");
    for (i = 0; i < 23; i++)
        printf("-");
    printf("+\n");

    for (i = 0; i < 3; i++)
        printf("| o | X | o | X | o | X |");
        printf("\n");
        printf("| X | o | X | o | X | o |");
        printf("\n");

    printf("+");
    for (i = 0; i < 23; i++)
        printf("-");
    printf("+");

    return(0);
}*/
#include <stdio.h>

/**
 * main - Fixing erros in a code
 *
 * Return: 0
 */
int main(void)
{
    int i;

    printf("+");
    {
    for (i = 0; i < 23; i++)
        printf("-");
        printf("+\n");
    }
    for (i = 0; i < 3; i++)
    {
        printf("| o | X | o | X | o | X |");
        printf("\n");
        printf("| X | o | X | o | X | o |");
        printf("\n");
    }
    printf("+");
    {
    for (i = 0; i < 23; i++)
        printf("-");
        printf("+");
    }
    return(0);
}
