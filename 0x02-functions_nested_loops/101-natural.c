#include <stdio.h>

/**
 * main - main entry point
 *
 * Description: prints the sum of all natural numbers divisible by 3 or 5
 *
 * Return: void
 */

int main(void)
{
	int sum, n;

	n = 0;
	while (n < 1024)
	{
		if (n % 3 || n % 5)
			sum += n;

		n++;
	}
	printf("%d\n", sum);
}
