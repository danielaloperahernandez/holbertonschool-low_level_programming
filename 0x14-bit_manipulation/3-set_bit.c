/**
*set_bit - sets the value of a bit to 1 at a given index
*@n: number
*@index: index the bit of change to 1
*Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(*n) * 8) - 1))
		return (-1);
	*n |= 1 << index;
		return (1);
}
