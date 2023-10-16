#include "main.h"
/**
* _atoi - Convert a string to an integer.
* @s: The string to convert.
*
* Return: The integer value or 0 if no valid integer found.
*/
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;
while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
i++;
if (s[i] == '-')
{
sign = -1;
i++;
} else if (s[i] == '+')
{
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
if (result > 0 && (result * sign < 0 || (result * 10 + (s[i] - '0')) < 0))
return (sign == 1 ? 2147483647 : -2147483648);
result = result * 10 + (s[i] - '0');
i++;
}
return result * sign;
}

