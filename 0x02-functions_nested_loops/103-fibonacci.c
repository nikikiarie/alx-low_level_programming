#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms
 *
 * Return:0
 */

int main(void)
{
	int j = 0;
	long k = 1, l = 2, sum = l;

	while (l + k > 4000000)
	{
		l += k;
		if (l % 2 == 0)
			sum += l;
		k = l - k;
		++j;
	}
	printf("%ld\n", sum);
	return (0);
}
