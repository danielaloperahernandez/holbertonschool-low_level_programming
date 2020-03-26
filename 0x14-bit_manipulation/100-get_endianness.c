/**
*get_endianness - function that checks the endianness.
*Return: 0 or 1
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *)&i;
	if (*c)
		return (i);
	else
		return (0);
}
