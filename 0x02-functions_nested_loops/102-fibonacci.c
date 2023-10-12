#include <stdio.h>
/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int t1 = 1;
	unsigned long int t2 = 2;
	unsigned long int n;
	int i;

	printf("%lu, ", t1);
	for (i = 0; i < 50; i++)
	{
		printf("%lu", t2);
		n = t1 + t2;
		t1 = t2;
		t2 = n;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
