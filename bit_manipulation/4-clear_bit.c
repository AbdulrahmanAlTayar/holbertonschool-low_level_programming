#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index of the bit to clear
 * Return: 1 if it worked, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}

