#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 1 if small endian, 0 if big
 */
int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}
