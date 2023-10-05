#include <stdio.h>
/**
 * main - Entry point of the program
 * This line defines the main function
 * This line uses the printf function to print the size of the'char,int,long int,long long int
 * float'
 * Return: Always 0 (success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
