#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: This function serves as the entry point of the program.
 * It checks if a character is alphabetic and prints '1' if it is,
 * and '0' if it's not, followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = 'A';

    if (_isalpha(c))
    {
        _putchar('1');
    }
    else
    {
        _putchar('0');
    }

    _putchar('\n');

    return (0);
}
