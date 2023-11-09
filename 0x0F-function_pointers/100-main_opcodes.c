#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: argument count
* @argv: argument vector
*
* Description : prints the opcodes of itself.
*
* Return: 0 (success)
*/
int main(int argc, char **argv)
{
int i, bytes;
int (*fun_ptr)(int, char **) = main;
unsigned char opcode;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < bytes; i++)
{
opcode = *(unsigned char *)fun_ptr;
printf("%.2x", opcode);
if (i != (bytes - 1))
printf(" ");
fun_ptr++;
}
printf("\n");
return (0);
}
