#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string using malloc
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}

