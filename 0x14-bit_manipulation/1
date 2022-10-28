
/**
 * clear_bit - clears a bit at a given index
 * @n: pointer to the number to clear
 * @index: the index to clear
 *
 * Return: 1 if it worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(*n) * 8) - 1)
		return (-1);

	mask = ~(1 << index);
	*n &= mask;

	return (1);
}
