/**
* _strcpy - Copies a string from src to dest.
* @dest: The destination buffer where the string will be copied to.
* @src: The source string to be copied.
*
* Return: A pointer to the destination buffer.
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
