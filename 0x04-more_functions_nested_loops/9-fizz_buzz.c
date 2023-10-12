#include <stdio.h>

/**
 * main - Entry point for the Fizz-Buzz program
 *
 * Description: Prints numbers from 1 to 100 with conditions:
 * - If divisible by 3, print "Fizz."
 * - If divisible by 5, print "Buzz."
 * - If divisible by both 3 and 5, print "FizzBuzz."
 * - Otherwise, print the number itself.
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
