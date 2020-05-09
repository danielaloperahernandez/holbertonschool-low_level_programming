#include "holberton.h"
/**
* _strstr - function that locates a substring.
* @haystack: search string.
* @needle: substring to find.
* Return: haystack or 0.
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
