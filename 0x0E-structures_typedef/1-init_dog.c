#include "dog.h"
#include <stdlib.h>
/*
* File:
* Author: 
* Desc: 
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}

