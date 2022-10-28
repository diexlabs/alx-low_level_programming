
/**
 * get_endianness - gets the endianness of the machine
 *
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;

	return (*y + 48);
}
