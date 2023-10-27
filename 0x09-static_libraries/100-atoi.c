#include "main.h"
#include <limits.h>
/**
* _atoi - Convert a string to an integer.
* @s: The string to convert.
*
* Return: The integer value.
*/
int _atoi(char *s) {
int result = 0;
int sign = 1;
while (*s) {
if (*s == '-') {
sign *= -1;
} else if (*s >= '0' && *s <= '9') {
int digit = *s - '0';
if ((sign == 1 && (result > INT_MAX / 10
|| (result == INT_MAX / 10 && digit > INT_MAX % 10)))
|| (sign == -1 && (result < INT_MIN / 10
|| (result == INT_MIN / 10 && digit > -(INT_MIN % 10))))){
return (result * sign);
}
result = result * 10 + digit;
} else if (result != 0) {
break;
}
s++;
}
return (result * sign);
}
