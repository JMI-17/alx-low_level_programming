/**
* _strcmp - Compare two strings lexicographically
* @s1: The first string to compare
* @s2: The second string to compare
*
* Return:
*  - 0 if s1 and s2 are equal
*  - a negative integer if s1 is less than s2
*  - a positive integer if s1 is greater than s2
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0') {
if (*s1 != *s2) {
return (*s1 - *s2);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
