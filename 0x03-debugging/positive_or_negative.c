#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This function generates a random number and
 * determines if it's positive, zero, or negative.
 *
 * Return: Always 0 (success)
 */
int positive_or_negative()
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    printf("%d is ", n);

    if (n > 0)
    {
        printf("positive\n");
    }
    else if (n == 0)
    {
        printf("zero\n");
    }
    else
    {
        printf("negative\n");
    }

    return (0);
}
