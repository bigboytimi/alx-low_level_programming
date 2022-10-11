#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

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
	unsigned int i, j, count;

	if (name == NULL || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		i++;

	doggy->name = malloc(sizeof(char) * i);

	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	};
	for (count = 0; count < i; count++)
		doggy->name[count] = name[count];

	doggy->age = age;

	for (j = 0; j != '\0'; j++)
		j++;

	doggy->owner = malloc(sizeof(char) * j);

	if (doggy->owner == NULL)
	{
		free(doggy);
		free(doggy->name);
		return (NULL);
	};
	for (count = 0; count < j; count++)
		doggy->owner[j] = owner[j];
	return (doggy);
}
