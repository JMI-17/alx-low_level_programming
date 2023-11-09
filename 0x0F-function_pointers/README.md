# 0x0F. C - Function pointers

## What are function pointers

Function pointers are pointers that point to functions instead of pointing to data or variables. They allow you to call a function indirectly through the pointer.

## What does a function pointer exactly hold

A function pointer in C holds the memory address of a function, which is essentially the location in memory where the machine code for that function is stored. When you assign a function's address to a function pointer, it allows you to indirectly call that function by invoking the pointer. In other words, the function pointer holds the information needed to locate and execute the specified function.

Function pointers contain two crucial pieces of information:

Memory Address: The primary information stored in a function pointer is the memory address of the function it points to. This address specifies the starting location of the function's machine code in memory.

Function Signature: The function pointer also stores information about the function's signature, including the return type and parameter types. This signature information is essential for type checking when you call the function through the pointer.


A function pointer in C points to the starting address of a function's machine code in the virtual memory.
