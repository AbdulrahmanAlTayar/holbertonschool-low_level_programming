# 0x10. C - Variadic functions

## 📚 Description

This project introduces **variadic functions** in C, which allow functions to accept an indefinite number of arguments. It covers how to declare, implement, and handle functions using the `stdarg.h` macros.

## 🧠 Concepts Covered

- Variadic functions in C (`...`)
- Usage of `va_list`, `va_start`, `va_arg`, `va_end`
- Function prototypes and best practices
- Handling NULL arguments and formatting output

## 📂 Files and Descriptions

| File | Description |
|------|-------------|
| `0-sum_them_all.c` | Returns the sum of all its parameters |
| `1-print_numbers.c` | Prints numbers separated by a string |
| `2-print_strings.c` | Prints strings separated by a string, `(nil)` if string is NULL |
| `3-print_all.c` | Prints anything based on a format string |
| `variadic_functions.h` | Header file containing all function prototypes |
| `0-main.c` to `3-main.c` | Test files for each function |

## 🛠️ Compilation

All files are compiled using the following flags:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <main>.c <task>.c -o <output>
```

Example:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-sum_them_all.c -o sum
./sum
