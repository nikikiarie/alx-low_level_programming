#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s:string
 * Return: void
 */
int _atoi(char *s)
{
	unsigned int i = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			i = (i * 10) + (*s - '0');
		else if (i > 0)
			break;
	} while (*s++);
	return (i * sign);
}
