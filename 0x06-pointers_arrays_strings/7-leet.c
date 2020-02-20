#include "holberton.h"
/**
*leet - encodes a string into 1337.
*@s: string
*Return: s
*/
char *leet(char *s)
{
	char c[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char n[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (*(s + i) == c[j])
				*(s + i) = n[j];
		}
	}
return (s);
}
