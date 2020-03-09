#include <stdio.h>
#include <stdlib.h>
/**
*string_nconcat - concatenates two strings
*@s1: string
*@s2: string
*@n: bytes of s2
*Return: pointer shall point to a newly allocated or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; ++i)
		;
	for (j = 0; s2[j]; ++j)
		;
	n = (n > j ? j : n);
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i]; ++i)
		p[i] = s1[i];
	for (j = 0; j < n; ++j) /* no more than n bytes of s2*/
		p[i + j] = s2[j];
	p[i + j] = '\0';
	return (p);
}
