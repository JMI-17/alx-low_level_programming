#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* is_digit - checks if a string is composed of digits
* @str: the string to check
*
* Return: 1 if composed of digits, 0 otherwise
*/
int is_digit(const char *str)
{
if (!str)
return (0);
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}
/**
* main - multiplies two positive numbers
* @argc: the number of command line arguments
* @argv: an array of command line arguments
*
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
int num1, num2;
if (argc != 3)
{
printf("Error\n");
return (98);
}
if (!is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%d\n", num1 * num2);
return (0);
}
