#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Description: Prints the numbers from 0 to 9 separated by ", "
 * followed by a new line. Numbers are in ascending order.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i;

    for (i = 0; i < 9; i++)
    {
        putchar(i + '0');
        putchar(',');
        putchar(' ');
    }

    putchar(9 + '0');
    putchar('\n');

    return (0);
}

