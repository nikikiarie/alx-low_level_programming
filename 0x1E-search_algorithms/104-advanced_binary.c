#include "search_algos.h"

/**
 * recursive_binary - searches for a value in an integer array
 * using recussive binary search
 * @array: array input
 * @size: value to search
 * @value: value to search
 * Return: index of value or -1
 */
int recursive_binary(int *array, size_t size, int value)
{
	size_t j;
	size_t mid = size / 2;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array");
	for (j = 0; j < size; j++)
		printf("%s %d", (j == 0) ? ":" : ",", array[j]);
	printf("\n");
	if (mid && size % 2 == 0)
		mid--;
	if (value == array[mid])
	{
		if (mid > 0)
			return (recursive_binary(array, mid + 1, value));
		return ((int)mid);
	}
	if (value < array[mid])
		return (recursive_binary(array, mid + 1, value));
	mid++;
	return (recursive_binary(array + mid, size - mid, value) + mid);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using advanced binary search
 * @array: array input
 * @size: num of elements in array
 * @value: value to search
 * Return: If the value is not present or the array is NULL, -1
 * else value of index
 */
int advanced_binary(int *array, size_t size, int value)
{
	int pos;

	pos = recursive_binary(array, size, value);

	if (pos >= 0 && array[pos] != value)
		return (-1);
	return (pos);
}
