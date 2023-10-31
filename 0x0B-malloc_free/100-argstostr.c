#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* argstostr - Concatenates all the arguments of a program.
* @ac: The argument count.
* @av: An array of strings containing the arguments.
*
* Return: A pointer to the new string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
char *concatenated;
int i, j, totalLength = 0, index = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
totalLength++;
totalLength++;
}
concatenated = malloc(totalLength + 1);
if (concatenated == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
concatenated[index] = av[i][j];
index++;
}
concatenated[index] = '\n';
index++;
}
concatenated[index] = '\0';
return (concatenated);
}
