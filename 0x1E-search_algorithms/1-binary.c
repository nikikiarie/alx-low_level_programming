#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *	 using the Binary search algorithm
 * @array: input array
 * @size: array size
 * @value: value to search
 * Return: index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, j;

	if (array == NULL)
		return (-1);

	for l = 0; r = size - 1; r >= l)
	{
		printf("Searching in array: ");
		for (j = l; j < r; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = l + (r - l) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			r = j - 1;
		else
			l = j + 1;
	}
}
