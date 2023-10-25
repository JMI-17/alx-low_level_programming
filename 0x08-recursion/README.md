0x08. C - Recursion


Recursion in C programming is a programming technique where a function calls itself to solve a problem. In other words, a recursive function is a function that can call itself either directly or indirectly to solve a specific task. Recursion is particularly useful for solving problems that can be broken down into smaller, similar subproblems.

Here are some key characteristics of recursive functions in C programming:

Base Case: Every recursive function has a base case, which defines when the recursion should stop. When the base case is reached, the function returns a result without making any further recursive calls. The base case is essential to prevent infinite recursion.

Recursive Case: In the recursive case, the function calls itself with modified arguments to solve a smaller or simpler subproblem. The goal is to reduce the original problem to the base case by making successive recursive calls.

Indirect Recursion: In some cases, multiple functions can call each other in a circular manner to achieve a certain task. This is called indirect recursion.




Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file
You are not allowed to use any kind of loops
You are not allowed to use static variables
