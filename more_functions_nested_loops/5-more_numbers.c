#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, ten times.
 *
 * Description: Uses _putchar to print numbers, including two-digit
 * numbers by splitting them into tens and units.
 */
void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
