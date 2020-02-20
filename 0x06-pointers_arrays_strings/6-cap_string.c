#include "holberton.h"
/**
*cap_string - capitalizes all words of a string.
*@s: string
*Return: s
*/
char *cap_string(char *s)
{
	char t[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
			 '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(t + j) != '\0'; j++)
		{
			if (i == 0)
			{
				if (*(s + i) >= 97 && *(s + i) <= 122)
					*(s + i) -= 32;
			}
			if (*(s + i) == *(t + j))
			{
				if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
				{
					*(s + i + 1) -= 32;
				}
			}
		}
	}
	return (s);
}
