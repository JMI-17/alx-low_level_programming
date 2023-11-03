#0x0C. C - More malloc, free

#General
##How to use the exit function

The exit function is part of the C standard library, and it's used to terminate a program and return an exit status code to the operating system.

##Example:
- #include <stdlib.h>

int main()
{
    // Your program logic here

    // Terminate the program and return an exit status code
    exit(0); // You can replace 0 with any desired exit status
}

The exit function takes an integer argument, which represents the exit status code. By convention, a return value of 0 usually indicates a successful program execution, while other values may be used to indicate errors or specific conditions.

When the exit function is called, the program immediately terminates, and the control is returned to the operating system along with the exit status code. This allows the calling process or script to determine the outcome of the program.

##What is CALLOC
calloc is a standard library function in C used to dynamically allocate memory for an array of elements, and it initializes the allocated memory to zero. It is often used when you need to allocate memory for an array and want to ensure that all the elements in the array are initially set to zero.
## What are the functions calloc and realloc from the standard library and how to use them

-calloc function: The calloc function is used to allocate and initialize a block of memory for an array of elements. It takes two arguments: the number of elements to allocate and the size (in bytes) of each element. It initializes the allocated memory to zero.

##Example:
- #include <stdlib.h>

int *arr;
int numElements = 10;

// Allocate memory for an integer array of 10 elements
arr = (int *)calloc(numElements, sizeof(int));

// Now you have an array of 10 integers, all initialized to 0

##What is REALLOC
The realloc function is a standard library function in C that is used to reallocate memory for a previously allocated block. It allows you to change the size of an existing memory block that was allocated using functions like malloc, calloc, or realloc itself. This can be particularly useful when you need to dynamically adjust the size of an array or data structure during program execution.

- realloc function: The realloc function is used to change the size of a previously allocated block of memory. It takes two arguments: a pointer to the previously allocated memory block and the new size you want it to be. It can be used to expand or shrink the memory block.

##Example:
- #include <stdlib.h>

int *arr;
int newNumElements = 20;

// Reallocate memory for an integer array of 20 elements
arr = (int *)realloc(arr, newNumElements * sizeof(int));

// The array has now been resized to hold 20 integers. Data is preserved if the block is expanded.

