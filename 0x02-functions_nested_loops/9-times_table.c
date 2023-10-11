#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (j == 0)
				printf("%d, ", k);
			else
			{
				printf("%2d", k);
				if (j != 9)
					printf(", ");
			}

		}
		printf("\n");
	}
}
