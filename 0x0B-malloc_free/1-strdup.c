#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	int i, j;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	dup = (char *) malloc((i + 1) * sizeof(char));
	if (dup == NULL)
		return(dup);
	for (j = 0; j<=i; ++j)
		dup[j] = str[j];
	return (dup);
}
