#!/bin/bash
# Compile all .c files in the current directory to object files
gcc -c *.c
# Create the static library liball.a from the object files
ar rcs liball.a *.o
