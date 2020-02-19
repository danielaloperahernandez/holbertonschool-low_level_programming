/**
* _atoi - convert a string to an integer
* @s: type string to converte
* Return: integer whith sign
*/

int _atoi(char *s)
{
	char let;
	int sign, num;

	sign = 1;
	num = 0;
	while ((let = *s) != '\0' && (let < '0' || let > '9'))
	{
		if (let == '-')
			sign *= -1;
		++s;
	}
	while (let >= '0' && let <= '9')
	{
		num = num * 10;
		num = num - (let - '0');
		let = *(++s);
	}
	return (num * -sign);
}
