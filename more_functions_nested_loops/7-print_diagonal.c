#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character \ should be printed.
 *
 * Description: This function prints a diagonal line with the character '\'
 *              for a given number of times n. If n is 0 or less, it only 
 *              prints a newline.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');  /* If n is less than or equal to 0, print a newline */
		return;
	}

	for (i = 0; i < n; i++)
	{
		/* Print leading spaces */
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');  /* Print the diagonal line */
		_putchar('\n');  /* Move to the next line */
	}
}
