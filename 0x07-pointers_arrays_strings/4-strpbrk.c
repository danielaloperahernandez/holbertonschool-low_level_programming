#include "holberton"
/**
* _strspn - searches a string for any of a set of bytes
* @s: string s
* @accept: string to search
* Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s[i]);
		}
	}
	return (0);
}
