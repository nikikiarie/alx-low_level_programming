#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum num
 * @max: maximum num
 * Return: int
 */
int *array_range(int min, int max)
{
	int a = 0, *i;

	if (min > max)
		return (NULL);
	i = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (i == NULL)
		return (NULL);
	while (min <= max)
	{
		i[a] = min;
		a++;
		min++;
	}
	return (i);
}
