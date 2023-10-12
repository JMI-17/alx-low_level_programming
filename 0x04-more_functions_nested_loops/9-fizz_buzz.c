#include <stdio.h>
/**
* main - Entry point for the Fizz-Buzz program
*
* Description:
* This program prints numbers from 1 to 100, applying the
* Fizz-Buzz rules. It prints "Fizz" for multiples of 3,
* "Buzz" for multiples
* of 5, and "FizzBuzz" for multiples of both, otherwise,
* it prints the number.
*
* Return: 0 (Success)
*/
int main() {
for (int i = 1; i <= 100; i++) {
if (i % 3 == 0 && i % 5 == 0) {
printf("FizzBuzz ");
} else if (i % 3 == 0) {
printf("Fizz ");
} else if (i % 5 == 0) {
printf("Buzz ");
} else {
printf("%d ", i);
}
}
printf("\n");
return 0;
}
