#include "holberton.h"
/**
* _atoi - convert a string to an integer
* @s: string to converte
* Return: integer whith sign
*/

int _atoi(char *s)
{
	char conv;
	int sign, num, cont;

	conv = *s;
	sign = 1;
	num = 0;

	while (conv != '\0' && (conv < '0' || conv > '9'))
	{
		if (conv == '-')
		{
			sign *= -1;
			s++;
		}
		else
			s++;
	}
	while (conv != '\0' && (conv >= '0' && conv <= '9'))
	{
		cont = num;
		num = num * 10;
		num = num - (conv - '0');
		conv = *(s++);
		if (num > cont)
		{
			return (cont * -sign);
			conv = *(s++);
		}
	}
	return (num * -sign);
}
