#include <stdio.h>
/**
* main - Entry point
*
* Description: This is the main function of the program.
* It assigns the value 98 to a[2] and then prints it.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
*p = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
