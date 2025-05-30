#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct operation
 * @s: operator
 * Return: pointer to correct function, or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && s && s[1] == '\0' && *(ops[i].op) != *s)
		i++;

	return (s && s[1] == '\0' ? ops[i].f : NULL);
}

