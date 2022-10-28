
/**
 * set_bit - sets a bit at a given index
 * @n: the number to set
 * @index: the index to set
 *
 * Return: 1 if it worked else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(*n) * 8) - 1)
		return (-1);

	mask = 1 << index;
	*n = *n | mask;
	return (1);
}
