#include "main.h"
/**
 * int _islower - checks for lower case character
 * @c: checking parameter
 * Return: 0 if false 1 if true
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
