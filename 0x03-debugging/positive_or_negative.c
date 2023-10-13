#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - Determines if a number is positive, zero, or negative.
 * @n: The number to be evaluated
 *
 * Return: Always 0 (success)
 */
int positive_or_negative(int n)
{
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

