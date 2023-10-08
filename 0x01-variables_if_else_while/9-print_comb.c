#include <stdio.h>
/**
* main - Entry point of the program
*
* Description:
* This function prints all possible combinations of
* single-digit numbers separated by ", " in ascending order.
*
* Return: Always 0 (success)
*/
int main() {
for (int i = '0'; i <= '9'; i++) {
for (int j = '0'; j <= '9'; j++) {
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
}
}
return 0;
}
