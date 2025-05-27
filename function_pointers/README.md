# 📌 Function Pointers Project

This project contains simple C programs demonstrating the use of **function pointers** to perform operations like callbacks and function selection at runtime.

---

## 📁 Files

| File Name         | Description                                            |
|------------------|--------------------------------------------------------|
| 0-print_name.c    | Calls a function to print a name                      |
| 1-array_iterator.c| Executes a function on each element of an array       |
| 2-int_index.c     | Searches for an integer using a comparison function   |
| 3-main.c          | Main program for a basic calculator                   |
| 3-op_functions.c  | Arithmetic operation functions: add, sub, mul, div, mod |
| 3-get_op_func.c   | Selects the correct function for the operation        |
| 3-calc.h          | Header file with structure and function prototypes    |

---

## 🛠️ Compile Example

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o print_name
./print_name

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
./calc 98 + 2

