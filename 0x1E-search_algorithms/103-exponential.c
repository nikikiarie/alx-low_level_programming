#include "search_algos.h"

/**
 * _binary_search - searches value using binary search
 * @array: array input
 * @start: starting index
 * @end: end index
 * @value: value to search
 * Return: If the value is not present or the array is NULL, -1
 * else index of value
 */
int _binary_search(int *array, size_t start, size_t end, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);
	while (end >= start)
	{
		printf("Searching in array: ");
		for (j = start; j < end; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);
		j = start + (end - start) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			end = j - 1;
		else
			start = j + 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: array input
 * @size: no of elements in array
 * @value: value to search
 * Return: If value is not present in array or if array is NULL, return -1
 * else index of value
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t end, j;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (j = 1; j < size && array[j] <= value; j = j * 2)
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	}
	end = j < size ? j : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", j / 2, end);
	return (_binary_search(array, j / 2, end, value));
}
