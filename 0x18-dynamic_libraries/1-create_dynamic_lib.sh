#!/bin/bash

# Compile all .c files into object files
gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c

# Create the dynamic library from the object files
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o
