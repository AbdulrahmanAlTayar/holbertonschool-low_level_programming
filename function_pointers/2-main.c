#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 * Return: 1 if equal to 98, 0 otherwise
 */
int is_98(int elem)
{
	return (elem == 98);
}

/**
 * is_strictly_positive - check if number > 0
 * @elem: the integer to check
 * Return: 1 if > 0, 0 otherwise
 */
int is_strictly_positive(int elem)
{
	return (elem > 0);
}

/**
 * abs_is_98 - check if abs value == 98
 * @elem: the integer to check
 * Return: 1 if abs(elem) == 98, 0 otherwise
 */
int abs_is_98(int elem)
{
	return (elem == 98 || -elem == 98);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
	int index;

	index = int_index(array, 20, is_98);
	printf("%d\n", index);

	index = int_index(array, 20, abs_is_98);
	printf("%d\n", index);

	index = int_index(array, 20, is_strictly_positive);
	printf("%d\n", index);

	return (0);
}

