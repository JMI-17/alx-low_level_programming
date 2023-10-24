#include "main.h"
/**
* _memcpy - Copies n bytes from the memory area src to the memory area dest.
* @dest: Pointer to the destination memory area.
* @src: Pointer to the source memory area.
* @n: Number of bytes to be copied.
*
* Return: A pointer to the destination memory area (dest).
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_ptr = dest;
char *src_ptr = src;
for (unsigned int i = 0; i < n; i++)
{
dest_ptr[i] = src_ptr[i];
}
return (dest);
}
