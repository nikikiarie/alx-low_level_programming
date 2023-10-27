#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - program that adds positive numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int count = 0, j;
	char *c;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];

			for (j = 0; j < strlen(c); j++)
			{
				if (c[j] < 48 || c[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			count += atoi(c);
			c++;
		}
		printf("%d\n", count);
	}
	else
		printf("0\n");
	return (0);
}
