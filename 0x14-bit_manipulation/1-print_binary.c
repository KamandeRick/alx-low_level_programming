#include "main.h"

/**
 * print_binary - prints binary represantation of a number
 * @n: converted number printed in binary
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int int_cur;

	for (x = 63; x >= 0; x--)
	{
		int_cur = n >> x;

		if (int_cur & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

