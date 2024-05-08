#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array: array input
 * @size: array size
 * @value: value to search
 * Return: If value is not present in array or if array is NULL,
 */
int interpolation_search(int *array, size_t size, int value)
{
	double z, a;
	size_t high, low, pos;

	if (array == NULL)
		return (-1);

	high = size - 1;
	low  = 0;

	while (size)
	{
		a = (double)(high - low)
		z = a / (array[high] - array[low]) * (value - array[low]);
		mid = (size_t)(low + z);
		printf("Value checked array[%d]", (int)pos);
		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[pos]);
		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		if (low == high)
			break;
	}
	return (-1);
}
