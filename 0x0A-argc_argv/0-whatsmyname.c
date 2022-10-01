#include "main.h"
#include <stdio.h>

/**
 * main - the entry of the programe
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: always returns 0 else there is error
 */

int main(int argc, char *argv[])
{
	argc++;
	printf("%s\n", argv[0]);
	return (0);
}
