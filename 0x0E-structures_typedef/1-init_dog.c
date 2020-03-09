#include <stdlib.h>
#include "dog.h"
/**
* init_dog - initialize struct dog 'd'
* @d: pointer to struct
* @name: name to initialize d
* @age: age yo initialize d
* @owner: owner to initialize d
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

