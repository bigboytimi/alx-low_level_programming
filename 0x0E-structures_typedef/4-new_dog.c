#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * _strcopy - Copies a string from src to dest
 *
 * @dest: The destination of copied string
 *
 * @src: The source of copied sting
 *
 * Return: The pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function entry point
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: owner of the dog
 *
 * Description: write a function that creates a new dog
 *
 * Return: pointer, on success. NULL, if functions fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	unsigned int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		i++;

	doggy->name = malloc(sizeof(char) * i + 1);

	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->age = age;

	for (j = 0; owner[j] != '\0'; j++)
		j++;

	doggy->owner = malloc(sizeof(char) * j + 1);

	if (doggy->owner == NULL)
	{
		free(doggy);
		free(doggy->name);
		return (NULL);
	}

	doggy->name = _strcopy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcopy(doggy->owner, owner);
	return (doggy);
}
