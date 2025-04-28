#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Description: program prints all hexadecimal digits (0-9, a-f)
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i;

    /* Loop to print digits 0-9 */
    for (i = 0; i < 10; i++)
    {
        putchar(i + '0'); /* Convert int to char and print it */
    }

    /* Loop to print letters a-f */
    for (i = 0; i < 6; i++)
    {
        putchar(i + 'a'); /* Convert int to char ('a' starts at 97 in ASCII) */
    }

    putchar('\n'); /* Print a newline character */

    return (0);
}
