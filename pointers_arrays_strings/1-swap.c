/**
 * swap_int  - swaps the values of two integers.
 * @a: take a number from user
 * @b: same as a
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
