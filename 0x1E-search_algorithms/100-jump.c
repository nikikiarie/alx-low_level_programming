#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: array input
 * @size: array size
 * @value: value to search
 * Return: If value is not present in array or if array is NULL,
 * return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t next, inc, j;

	if (array == NULL || size == 0)
		return (-1);

	inc = sqrt(size);
	for (j = next = 0; next < size && array[next] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", next, array[next]);
		j = next;
		next += inc;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", j, next);
	next = next < size - 1 ? next : size - 1;
	for (; j < next && array[j] < value; j++)
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	return (array[j] == value ? (int)j : -1);
}
