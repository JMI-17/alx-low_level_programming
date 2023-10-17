#include "main.h"
/**
 * main - Entry point
 *
 * Description: This is the main function that serves as the entry point
 * for the program. It calls the `print_last_digit` function to print and
 * return the last digit of an integer.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n = 98;
    int last_digit;

    last_digit = print_last_digit(n);
    _putchar('\n');

    return (0);
}
