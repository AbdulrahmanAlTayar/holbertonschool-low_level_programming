# 0x0A. C - malloc, free

This project is part of the low-level programming curriculum at Holberton School.  
It introduces the fundamental concepts of **dynamic memory allocation** in C using the standard library functions: `malloc`, `free`, and friends.

## Concepts Covered

- Heap vs Stack memory
- Allocating memory with `malloc`
- Releasing memory with `free`
- Creating and manipulating dynamically allocated arrays and strings
- Building 2D arrays dynamically

## Project Structure

Each file in this directory implements a function that demonstrates proper use of dynamic memory:

- `0-create_array.c` - Create a char array and initialize it
- `1-strdup.c` - Duplicate a string into newly allocated memory
- `2-str_concat.c` - Concatenate two strings into newly allocated memory
- `3-alloc_grid.c` - Allocate a 2D array (grid) of integers
- `4-free_grid.c` - Free a previously allocated 2D array

## Compilation

All files are compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89

