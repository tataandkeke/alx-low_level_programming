#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: return
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogN;
	int i, j, k;
	char *n, *o;

	dogN = malloc(sizeof(dog_t));

	if (dogN == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(dogN);
		return (NULL);
	}

	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(dogN);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];

	dogN->name = n;
	dogN->age = age;
	dogN->owner = o;

	return (dogN);
}
