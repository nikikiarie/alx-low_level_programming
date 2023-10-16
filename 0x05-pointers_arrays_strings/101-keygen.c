#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords
 * Return: 0
 */

int main(void)
{
	char i;
	int sum;

	srand(time(NULL));
	while (sum <= 2645)
	{
		i = rand() % 128;
		sum += i;
		putchar(i);
	}
	putchar(2772 - sum);
	return (0);
}
