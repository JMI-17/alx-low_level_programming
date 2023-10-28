#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int is_positive_number(char *str)
{
if (*str == '\0')
{
return (0);
}
while (*str)
{
if (*str < '0' || *str > '9')
{
return (0);
}
str++;
}
return (1);
}
int main(int argc, char *argv[])
{
int sum = 0;
int i;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}