#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except 'e' and 'q'
 *
 * Description: program prints all lowercase letters
 * except for 'e' and 'q', followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i=97;
	
	while(i<123)
	{
		if((char)i != 'e' && (char)i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return(0);
}
