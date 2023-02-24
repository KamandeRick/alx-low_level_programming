#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabet X 10
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char c;

	int n;

	n = 0;

	while (n < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		n++;
	}
}
