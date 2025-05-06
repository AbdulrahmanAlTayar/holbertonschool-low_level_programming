#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Description: Uses _putchar to print digits 0 through 9 followed by newline.
 *
 * Return: void
 */
void print_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');
}

