#include "holberton.h"
/**
*_strlen_recursion - returns the length of a string
*@s: string
*Return: lenght
*/
int _strlen_recursion(char *s)
{
        if (*s == '\0')
                return (0);
        return (1 + _strlen_recursion(s + 1));
}

#include "holberton.h"
/**
*is_palindrome2 - returns 1 if a string is a palindrome and 0 if not
*@s: string
*Return: 1 or 0
*/
int is_palindrome2(char *s, char *rev)
{
	if (*s != *rev)
		return (0);
	if (*s >= *rev)
		return (1);
	return (is_palindrome2(++s, --rev);
}
#include "holberton.h"
/**
*is_palindrome - returns 1 if a string is a palindrome and 0 if not
*@s: string
*Return: 1 or 0 
*/
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	return (is_palindrome2(s, s + len));
}
