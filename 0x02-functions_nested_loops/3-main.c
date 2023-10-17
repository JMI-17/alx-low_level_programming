#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: This function checks if a character is lowercase using
 * the _islower function and prints '1' if it's lowercase or '0' if it's not.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    char c = 'c';

    if (_islower(c))
        _putchar('1');
    else
        _putchar('0');

    _putchar('\n');

    return (0);
}
