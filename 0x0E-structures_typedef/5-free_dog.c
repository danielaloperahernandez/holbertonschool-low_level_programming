#include <stdlib.h>
#include "dog.h"
/**
*free_dog - deallocate memory for struct dog
*@d: pointer to dog struct
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
