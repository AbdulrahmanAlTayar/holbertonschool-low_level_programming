#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Returns length of a string
 * @s: The string
 *
 * Return: Length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s && s[len])
		len++;

	return (len);
}

/**
 * _strcpy - Copies string from src to dest
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (!dest || !src)
		return (NULL);

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Pointer to new dog_t or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_cpy, *owner_cpy;
	int name_len, owner_len;

	if (!name || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	name_cpy = malloc(name_len + 1);
	if (!name_cpy)
	{
		free(dog);
		return (NULL);
	}
	owner_cpy = malloc(owner_len + 1);
	if (!owner_cpy)
	{
		free(name_cpy);
		free(dog);
		return (NULL);
	}

	_strcpy(name_cpy, name);
	_strcpy(owner_cpy, owner);

	dog->name = name_cpy;
	dog->age = age;
	dog->owner = owner_cpy;

	return (dog);
}

