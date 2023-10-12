#include <stdio.h>
/**
 * main - Entry point for the Fizz-Buzz program
 *
 * This function prints numbers from 1 to 100 according to the Fizz-Buzz rules.
 * Multiples of 3 are replaced with "Fizz," multiples of 5 with "Buzz," and
 * multiples of both 3 and 5 with "FizzBuzz."
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i < 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
