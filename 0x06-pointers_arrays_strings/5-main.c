#include "main.h"
#include <stdio.h>
#include <stdlib.h>  // Include this library for dynamic memory allocation

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";  // Original string
    char *ptr;

    // Allocate memory for a new string to store the modified version
    char *modified_str = (char *)malloc(sizeof(str));
    if (modified_str == NULL) {
        return (1);  // Memory allocation failed
    }

    // Copy the original string to the new string
    strcpy(modified_str, str);

    // Call the string_toupper function to modify the new string
    ptr = string_toupper(modified_str);

    // Print the modified string
    printf("%s", ptr);

    // Print the original string (not modified)
    printf("%s", str);

    // Free the dynamically allocated memory
    free(modified_str);

    return (0);
}
