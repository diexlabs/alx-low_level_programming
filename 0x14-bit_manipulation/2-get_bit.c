
/**
 * get_bit - get a bit at a given index
 * @n: the number to get its bit
 * @index: the index of the bit
 *
 * Return: the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit;

	if (index > (sizeof(index) * 8))
		return (-1);
	mask = 1 << index;
	bit = (n & mask) ? 1 : 0;
	return (bit);
}
