#include "main.h"
#include <stdio.h>
/**
* infinite_add - Adds two numbers
* @n1: The first number as a string
* @n2: The second number as a string
* @r: The buffer to store the result
* @size_r: The size of the buffer
*
* Return: A pointer to the result or 0 if it can't be stored in r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, k = 0, carry = 0;
while (n1[i] != '\0' || n2[j] != '\0' || carry)
{
int sum = carry;
if (n1[i] != '\0')
sum += n1[i++] - '0';
if (n2[j] != '\0')
sum += n2[j++] - '0';
carry = sum / 10;
r[k++] = (sum % 10) + '0';
if (k == size_r)
return (0);
}
r[k] = '\0';
if (k == 0)
return (0);
for (i = 0, j = k - 1; i < j; i++, j--)
{
char temp = r[i];
r[i] = r[j];
r[j] = temp;
}
return (r);
}
