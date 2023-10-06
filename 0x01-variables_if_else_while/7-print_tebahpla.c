#include <stdio.h>
/**
 * main - entry function
 *
 * Return: 0 on succes
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	printf("\n");
	return (0);
}
