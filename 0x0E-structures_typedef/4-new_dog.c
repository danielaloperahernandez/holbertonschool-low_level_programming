#include <stdlib.h>
#include "dog.h"

/**
* new_dog - create a new dog (type struct)
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: pointer to 'dog_t' or NULL if fails allocate memory
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *new_name, *new_owner;
	int i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i]; ++i)
		;
	new_name = malloc(sizeof(char) * (i + 1));
	if (new_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	while (i >= 0)
	{
		new_name[i] = name[i];
		--i;
	}
	for (i = 0; owner[i]; ++i)
		;
	new_owner = malloc(sizeof(char) * (i + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(dog);
		return (NULL);
	}
	while (i >= 0)
	{
		new_owner[i] = owner[i];
		--i;
	}
	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;
	return (dog);
}


