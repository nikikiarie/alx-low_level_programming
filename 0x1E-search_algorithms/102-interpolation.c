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
	double z;
	size_t start, end, mid;

	if (array == NULL)
		return (-1);

	start = size - 1;
	end = 0;

	while (size)
	{
		a = (double)(start - end)
		z = a / (array[start] - array[end]) * (value - array[end]);
		mid = (size_t)(end + z);
		printf("Value checked array[%d]", (int)mid);
		if (mid >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[mid]);
		if (array[mid] == value)
			return ((int)mid);
		if (array[mid] < value)
			end = mid + 1;
		else
			start = mid - 1;
		if (end == start)
			break;
	}
	return (-1);
}
