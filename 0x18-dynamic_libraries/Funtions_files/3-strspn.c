#include "holberton.h"
/**
* _strspn - gets the length of a prefix substring
* @s: array in which the segment will be searched
* @accept: contain segment to compare
* Return: n bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, n = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (n);
	}
	return (0);
}
