#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
*
* Description: a program that performs simple operations.
*
* Return: 0 (success)
*/
int main(int argc, char **argv)
{
int num1, num2, result;
char *opr;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
opr = argv[2];
if (get_op_func(opr) == NULL || opr[1] != '\0')
{
printf("Error\n");
exit(99);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if ((*opr == '/' || *opr == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
result = get_op_func(opr)(num1, num2);
printf("%d\n", result);
return (0);
}
