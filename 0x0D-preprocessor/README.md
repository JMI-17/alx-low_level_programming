## 0x0D. C - Preprocessor

# What are macros
Macros in C are a way to define short, reusable code snippets that are replaced by their expanded form during the preprocessing phase. Macros are defined using the #define preprocessor directive and are typically used to create symbolic constants or to define small, reusable code blocks.

Defining Macros:
To define a macro, use the #define directive followed by the macro name, a value, and no semicolon. Macros can be defined with or without parameters.

EG: Defining a Simple Constant Macro: #define PI 3.14159265
    Defining a Parameterized Macro: #define SQUARE(x) ((x) * (x))
    
Using Macros:
You can use macros by invoking them in your code. When the code is compiled, the preprocessor replaces macro invocations with their expanded form.

Using Constant Macros:
double radius = 5.0;
double area = PI * SQUARE(radius);

Using Parameterized Macros:
int result = SQUARE(4); // Expands to (4 * 4)

Preprocessor Directives:
Macros are typically defined at the beginning of a source file, but they can also be included in header files for broader use. Macros should be defined before they are used.

Header File Example:
// my_macros.h
#define MAX(x, y) ((x) > (y) ? (x) : (y))

Usage in Code:
#include "my_macros.h"

int a = 10, b = 20;
int max_value = MAX(a, b); // Expands to ((a) > (b) ? (a) : (b))


## The most common predefined macros include:

__FILE__: Expands to the name of the current source code file as a string.

__LINE__: Expands to the current line number in the source code as an integer.

__DATE__: Expands to a string containing the compilation date in the format "Mmm dd yyyy."

__TIME__: Expands to a string containing the compilation time in the format "hh:mm:ss."

__STDC__: This macro is defined with a nonzero value if the compiler complies with the ANSI C standard. It can be used for conditional compilation.

__cplusplus (C++ only): Defined when compiling C++ code. It can be used for conditional compilation in C++ programs.

_WIN32 and __WIN32__ (on Windows): Defined when compiling on Windows platforms. They can be used for platform-specific code.

__unix__, __linux__, and _AIX (on Unix-like systems): These macros are defined when compiling on specific Unix-like systems, such as Linux or AIX.

_MSC_VER (Microsoft Visual C++): Defined when compiling with Microsoft Visual C++ compilers. It contains the version number.

__GNUC__: Defined when compiling with the GCC (GNU Compiler Collection) compiler. It contains the major version number.

__clang__: Defined when compiling with the Clang compiler. It can be used for conditional compilation in Clang-specific code.

__APPLE__ (on macOS): Defined when compiling on Apple macOS platforms.

These predefined macros can be useful for writing portable and platform-specific code. You can use them with conditional compilation directives like #ifdef and #ifndef to control which parts of your code are included based on the compiler or platform you're targeting.


Guard Header File

Header guards (or include guards) are preprocessor directives used in C and C++ to prevent a header file from being included more than once in the same translation unit. They help prevent issues related to multiple inclusions, which can lead to redefinition errors and increased compilation times. 

To include guard your header files, you can follow these steps:

Choose a unique identifier: Define a unique identifier that is specific to the header file. Conventionally, this identifier is derived from the name of the header file in uppercase and with underscores (_) instead of spaces or periods.

Define the guard directives: Place the include guard directives at the beginning of the header file, right before the actual content of the header. The guard typically consists of three directives:

#ifndef: This checks if the identifier has not been defined.

#define: This defines the identifier to prevent further inclusions of the file.

#endif: This marks the end of the guard section.

Here is an example of how to include guard a header file:
#ifndef MY_HEADER_H
#define MY_HEADER_H

// Your header file content goes here

#endif /* MY_HEADER_H */


