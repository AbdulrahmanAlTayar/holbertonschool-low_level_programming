/**
 * swap_int  - swaps the values of two integers.
 * @a: take a number from user
 * @b: same as a
 * @c: to make swap between a and b
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
    int c = *a;
    	*a = *b;
	*b = c;
}
