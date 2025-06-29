#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: string of 0 and 1 characters
 * Return: the converted number, or 0 if invalid
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}

