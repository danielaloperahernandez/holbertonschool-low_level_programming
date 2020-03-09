#include "holberton.h"
/**
* rot13 - function that encodes a string
* @s: string to encode
* Return: s
*/
char *rot13(char *s)
{
	int i, j;

	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != '\0'; j++)
		{
			if (*(s + i) == c[j])
			{
				*(s + i) = rot[j];
				break;
			}
		}
	}
	return (s);
}
