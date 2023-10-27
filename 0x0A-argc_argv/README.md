0x0A. C - argc, argv

argc and argv are parameters typically used in the main function of a C or C++ program to handle command-line arguments. They are essential for passing arguments to a program when it is run from the command line.

argc (Argument Count): argc is an integer that represents the number of command-line arguments passed to the program, including the program name itself. It is always at least 1 because the first argument is the program's name.

argv (Argument Vector): argv is an array of strings (an array of pointers to characters) that holds the actual command-line arguments. Each element of the argv array is a string representing one of the arguments. The first element, argv[0], is the program name.

Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file
You are allowed to use the standard library
