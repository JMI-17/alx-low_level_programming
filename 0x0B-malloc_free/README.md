0x0B. C - malloc, free

This Series of task aims to help us understand the useof MALLOC which is short for Memory Allocation.
The Two types of memory allocation we will be looking at is Automatic and Dynamic MALLOC.

The difference between automatic and dynamic allocation
Automatic Allocation (Stack Allocation):
Memory is allocated on the program's call stack.
Typically used for local variables in functions and data with a known and fixed size.
Memory is allocated and deallocated automatically as functions are called and return.
Memory allocation and deallocation are fast and efficient.
Limited in size, as the stack size is usually predetermined and small.
Local variables are automatically destroyed when they go out of scope.
Prone to stack overflow if the call stack becomes too deep.
Typically used for small and short-lived data structures.

Dynamic Allocation (Heap Allocation):
Memory is allocated on the heap, which is a region of memory separate from the call stack.
Used for data structures of variable or large size, whose size may not be known at compile time.
Memory must be explicitly allocated and deallocated by the programmer (e.g., using malloc, calloc, new, or other heap allocation functions).
Memory allocation and deallocation can be slower than stack allocation.
Heap memory is larger and can grow as needed (limited by system resources).
Data allocated on the heap persists until explicitly deallocated, which can lead to memory leaks if not managed properly.
Used for long-lived or large data structures, such as arrays, linked lists, and object

