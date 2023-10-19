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
int len1, len2, carry = 0;
int i, j, k;
for (len1 = 0; n1[len1] != '\0'; len1++)
;
for (len2 = 0; n2[len2] != '\0'; len2++)
;
if (size_r <= len1 + 1 || size_r <= len2 + 1)
return (0);
i = len1 - 1;
j = len2 - 1;
k = size_r - 1;
r[k] = '\0';
while (i >= 0 || j >= 0)
{
int sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
if (sum > 9)
{
carry = 1;
sum -= 10;
}
else
{
carry = 0;
}
r[--k] = sum + '0';
if (k == 0 && (i > 0 || j > 0 || carry))
return (0);
i--;
j--;
}
if (carry)
{
if (k == 0)
return (0);
r[--k] = '1';
}
return (r + k);
}
