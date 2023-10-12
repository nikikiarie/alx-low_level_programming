#include <stdio.h>
/**
 * main - prints the largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	long i, num = 612852475143;

	while (i < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}
		for (i = 3; i < (num / 2); i += 2)
		{
			if ((num % i) == 0)
				num /= i;
		}
	}
	printf("%ld\n", num);
	return (0);
}
