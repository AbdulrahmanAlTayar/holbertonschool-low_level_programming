# 0x0D. C - Structures, typedef

## Description

This project introduces the use of `struct` in C, focusing on how to define, initialize, print, and manage memory for structures. It also covers the use of `typedef` to create aliases for structs.

## Files

- `dog.h`: Defines the `struct dog` and the alias `dog_t`. Contains function prototypes.
- `1-init_dog.c`: Initializes a variable of type `struct dog`.
- `2-print_dog.c`: Prints the contents of a dog struct with proper formatting and NULL checks.
- `4-new_dog.c`: Dynamically allocates memory for a new dog and stores copies of name and owner.
- `5-free_dog.c`: Frees memory allocated for a dog.

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file>.c -o <output>

