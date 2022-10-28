
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the char string of bits
 *
 * Return: the converted number or 0 if b is invalid or None
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	char *c;

	sum = 0;

	if (b)
	{
		c = (char *)b;
		while (*c)
		{
			if (!(*c == '1' || *c == '0'))
				return (0);
			sum = (sum * 2) + (*c - '0');
			c++;
		}
	}

	return (sum);
}
