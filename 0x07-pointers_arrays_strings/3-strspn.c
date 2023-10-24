/**
* _strspn - Gets the length of a prefix substring.
* @s: The string to be searched.
* @accept: The string containing characters to be matched.
*
* Return: The number of bytes in the initial segment of s
* which consist only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int match;

while (*s)
{
match = 0;
for (int i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
match = 1;
break;
}
}
if (match)
{
count++;
s++;
}
else
{
break;
}
}

return count;
}
