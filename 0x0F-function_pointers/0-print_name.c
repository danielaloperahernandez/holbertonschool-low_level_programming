#include <stdlib.h>
#include "function_pointers.h"
/**
*print_name - prints a name
*@name: pointer to string name
*@f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(1);
	f(name);
}
