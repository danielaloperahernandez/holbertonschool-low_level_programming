#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_dog - print members of struct dog 'd'
*@d: struct to print|
*
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
