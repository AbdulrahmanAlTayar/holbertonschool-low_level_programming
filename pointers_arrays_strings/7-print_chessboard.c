#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to a 2D array (8x8) representing the board
 *
 * Description: Loops through each row and column and prints each character.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++) /* iterate over rows */
	{
		for (j = 0; j < 8; j++) /* iterate over columns */
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

