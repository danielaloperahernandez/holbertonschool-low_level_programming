/**
*binary_to_uint - converts a binary number to an unsigned int
*@b: pointing to a string of 0 and 1 chars
*Return: the converted number, or 0 if
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = n * 2 + *b - '0';
		++b;
	}
	return (n);
}
