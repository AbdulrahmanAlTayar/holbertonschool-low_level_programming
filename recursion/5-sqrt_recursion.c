#include "main.h"

/**
 * sqrt_helper - helper to find square root
 * @n: number
 * @i: guess value
 * Return: square root or -1
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns natural square root of n
 * @n: input number
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}

