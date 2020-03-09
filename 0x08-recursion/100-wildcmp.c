#include "holberton.h"
/**
*strlen_wilds - length of a string without wildcards
*@str: string
*Return: length
*/
int strlen_wilds(char *str)
{
	int len = 0, i = 0;

	if (*(str + i))
	{
		if (*str != '*')
			len++;
		i++;
		len += strlen_wilds(str + i);
	}
	return (len);
}
/**
* locate_wild - iterate through string locate wildcard
* @str2: string
*/
void locate_wild(char **str2)
{
	if (**str2 == '*')
	{
		(*str2)++;
		locate_wild(str2);
	}
}
/**
*match - checks if a string matches de character of another string
*@str3: string to be matched
*@tr1: string to compared
*Return: if s and d identicals a pointer to the null byte in t
*otherwise a pointer to the first unmatchet
*/
char *match(char *str3, char *tr1)
{
	int s_len = strlen_wilds(str3) - 1;
	int t_len = strlen_wilds(tr1) - 1;

	if (*tr1 == '*')
		locate_wild(&tr1);
	if (*(str3 + s_len - t_len) == *tr1 && *tr1 != '\0')
	{
		tr1++;
		return (match(str3, tr1));
	}
	return (tr1);
}
/**
*wildcmp - compares two strings take in account wildcards
*@s: string to be compare
*@t:string to be compare - wildcards
*Return: if strings ares identicals 1 otherwise 0
*/
int wildcmp(char *s, char *t)
{
	if (*t == '*')
	{
		locate_wild(&t);
		t = match(s, t);
	}
	if (*t == '\0')
		return (1);
	if (*s != *t)
		return (0);
	return (wildcmp(++s, ++t));
}
