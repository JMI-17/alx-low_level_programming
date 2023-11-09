
# Variadic functions 
Thhese are functions that can take a variable number of arguments. This is in contrast to most programming languages, where functions typically have a fixed number of arguments.

## Variadic functions are useful for a variety of tasks, such as:

Logging: Variadic functions can be used to log messages with a variable number of arguments, such as the time, date, thread ID, and message text.
String formatting: Variadic functions can be used to format strings with a variable number of arguments, such as the printf function in C.
Command-line parsing: Variadic functions can be used to parse command-line arguments with a variable number of arguments.


## How to use va_start, va_arg and va_end macros
To use the va_start, va_arg, and va_end macros, you must first declare the function that you will be using them in as a variadic function. This is done by adding the ellipsis (...) operator to the end of the function's parameter list.

## Why and how to use the const type qualifier
The const type qualifier is used to declare a variable or function parameter as constant. This means that the value of the variable or parameter cannot be changed after it has been initialized.

### There are several reasons why you should use the const type qualifier:

To improve code readability and maintainability: When you mark a variable or parameter as constant, you are telling other programmers that its value should not be changed. This makes your code more readable and easier to maintain.
To prevent accidental modification:By using const, you can ensure that values are not accidentally modified, reducing the chance of bugs and errors in your code.
To enable compiler optimizations: Compilers can optimize code more effectively when they know that the values of variables and parameters will not change.
To use the const type qualifier, simply add the const keyword before the type of the variable or parameter. For example:

const int MY_CONSTANT = 10;
