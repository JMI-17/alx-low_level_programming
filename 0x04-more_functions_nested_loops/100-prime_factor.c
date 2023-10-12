#include <stdio.h>
#include <math.h>
/**
* findLargestPrimeFactor - Find the largest prime factor of a number.
*
* @n: The number for which the largest prime factor is to be found.
*
* Return: The largest prime factor of the number.
*/
long long findLargestPrimeFactor(long long n)
{
long long maxPrime = -1;
while (n % 2 == 0)
{
maxPrime = 2;
n /= 2;
}
for (long long i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
maxPrime = i;
n /= i;
}
}
if (n > 2)
{
maxPrime = n;
}
return (maxPrime);
}
/**
* main - Entry point of the program
*
* Return: 0 on success.
*/
int main(void)
{
long long number = 612852475143;
long long largestPrimeFactor = findLargestPrimeFactor(number);
printf("%lld\n", largestPrimeFactor);
return (0);
}
