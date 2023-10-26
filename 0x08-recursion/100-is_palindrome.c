#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* is_palindrome_recursive - Checks if a string is a recursive.
* @s: The input string to check.
* @left: The left index of the current substring.
* @right: The right index of the current substring.
* Return: 1 if the string is a palindrome, 0 if not.
*/
int is_palindrome_recursive(char *s, int left, int right)
{
if (left >= right)
{
return (1);
}
if (s[left] != s[right])
{
return (0);
}
return (is_palindrome_recursive(s, left + 1, right - 1));
}
/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if it's a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int length = strlen(s);
return (is_palindrome_recursive(s, 0, length - 1));
}
