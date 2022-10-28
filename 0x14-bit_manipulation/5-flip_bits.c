
/**
 * flip_bits - count the number of bits to be fliped
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask;
	unsigned int count;

	mask = n ^ m;
	count = 0;

	while (mask > 0)
	{
		count++;
		mask &= (mask - 1);
	}

	return (count);
}
