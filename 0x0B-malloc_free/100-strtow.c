#include <stdlib.h>
#include <stdio.h>
/**
*words - count words in a string
*@st: pointer to string
*Return: number of words (n)
*/
int words(char *st)
{
	int i = 0, n = 0;

	while (st[i])
	{
		while (st[i] && st[i] == ' ') /*count positions with spaces*/
			++i;
		if (st[i] == '\0')
			break;
		while (st[i] && st[i] != ' ')
			++i;
		++n;
	}
	return (n);
}
/**
*strtow - split str in array of words
*@str: string with words separate for spaces
*Return: pointer to array of strings
*/
char **strtow(char *str)
{
	int i, j, k, nw, start, end;
	char **pt;

	if (str == NULL || *str == '\0')
		return (NULL);
	nw = words(str);
	if (nw == 0)
		return (NULL);
	++nw;
	pt = (char **)malloc(nw * sizeof(char *));
	if (pt == NULL)
		return (NULL);
	i = j = 0;
	while (str[i])
	{
		for (; str[i] && str[i] == ' '; ++i)
			;
		if (str[i] == '\0')
			break;
		start = i - 1;
		for (; str[i] && str[i] != ' '; ++i)
			;
		end = i - 1;
		pt[j] = (char *) malloc((end - start  + 1) * sizeof(char));
		if (pt[j] == NULL)
		{
			free(pt[j]);
			while (j)
				free(pt[--j]);
			free(pt);
			return (NULL);
		}
		for (k = 0; k < (end - start); ++k)
			pt[j][k] = str[start + k];
		pt[j++][k] = '\0';
	}
	pt[j] = NULL;
	return (pt);
}
