#include <stdio.h>
/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	int n = 0;
	long int i = 2, j = 1;

	while (n < 50)
	{
		if (n == 0)
			printf("%ld", j);
		else if (n == 1)
			printf("%ld", i);
		else
		{
			i += j;
			j = i - j;
			printf("%ld", i);
		}
		++n;
	}
	printf("\n");
	return (0);
}
