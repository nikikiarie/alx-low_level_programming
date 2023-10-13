#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	long i, j, num = 612852475143;
	double sq = sqrt(num);

	for (i = 1; i <= sq; i++)
	{
		if ((num % i) == 0)
			j = num / i;
	}
	printf("%ld\n", j);
	return (0);
}
