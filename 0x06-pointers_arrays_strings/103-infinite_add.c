#include "main.h"
/**
 * rev_string - reverse array
 * @v: int
 * Return: 0;
 */

void rev_string(char *v)
{
	int i = 0, j = 0;
	char t;

	while (*(v + i) != '\0')
		i++;
	i--;
	for (j = 0; j < i; j++, i--)
	{
		t = *(v + j);
		*(v + j) = *(v + i);
		*(v + i) = t;
	}
}

/**
 * infinite_add -  adds two numbers
 * @n1: num 1
 * @n2: num 2
 * @r: buffer to store result
 * @size_r: buffer size
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int v1 = 0, v2 = 0, tt = 0;
	int o = 0, i = 0, j = 0, d = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || o == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		tt = v1 + v2 + o;
		if (tt >= 10)
			o = 1;
		else
			o = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (tt % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}
