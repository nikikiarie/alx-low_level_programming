#include "main.h"
#include <stdio.h>
/***
 * print_to_98 - prints natural numbers from n to 98, followed by a new line.
 * @i: parameter
 * Return: void
 */

void print_to_98(int i)
{
	int j;

	if (i >= 0 && i <= 98)
	{
		for (j = i; j <= 98; j++)
		{
			printf("%d", j);
			if (j != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (i < 0)
	{
		for (j = i; j <= 98; j++)
		{
			printf("%d", j);
			if (j != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (i > 98)
	{
		for (j = i; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (i == 98)
	{
		printf("%d\n", i);
	}
}

