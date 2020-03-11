#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
*main - performs simple operations.
*@argv: array of string
*@argc: number of arguments
*Return: 0
*/

int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*op_func)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if ((*operator == '/' || *operator == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	op_func = get_op_func(operator);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = op_func(n1, n2);
	printf("%d\n", result);
	return (0);
}
