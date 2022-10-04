#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the argument count
 * @av: the arg vector
 *
 * Return: the pointer to the resulting string
 */

char *argstostr(int ac, char **av)
{
	int i, n, i2;
	char *str;

	if (ac == 0 || !av)
		return (NULL);

	n = 0;
	i = 0;
	while (av[i])
	{
		i2 = 0;
		while (av[i][i2++])
			n++;
		n++;
		i++;
	}

	str = malloc(n * sizeof(char));
	if (!str)
		return (NULL);

	n = 0;
	i = 0;
	while (av[i])
	{
		i2 = 0;
		while (av[i][i2])
			str[n++] = av[i][i2++];
		str[n++] = '\n';
		i++;
	}

	return (str);
}
