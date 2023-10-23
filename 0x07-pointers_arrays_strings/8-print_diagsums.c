#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: params 1
 * @size: params 2
 * Return: 0 on success
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int count1 = 0, count2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		count1 = count1 + a[i];
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		count2 = count2 + a[j];
	printf("%d, %d\n", count1, count2);
}
