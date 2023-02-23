#include "main.h"

/**
 * print_line - draws straight line in terminal
 * Return: Always 0
 * @n: number of times to print '_'
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
