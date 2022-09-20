#include <stdio.h>

int main()
{
	char c;
	char *p = &c;

	printf("%p\n", p);

	return 0;
}
