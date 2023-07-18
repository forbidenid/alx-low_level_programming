#include "dog.h"
#include <stdlib.h>

/**
 * dog_t - function that creates a new dog
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 * root-codes
 * Return: p
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int j, k, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (j = 0; name[j]; j++)
		;
	j++;
	dog->name = malloc(j * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < j; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (k = 0; owner[k]; k++)
		;
	k++;
	dog->owner = malloc(k * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < k; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
