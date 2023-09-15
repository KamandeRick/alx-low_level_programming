#include "main.h"

/**
 * flip_bits -  returns the number of bits
 * to flip to get from one number to another
 * @n: first unsigned long int
 * @m: second unsigned long int
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int int_cur;
	unsigned long int int_excl = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		int_cur = int_excl >> x;
		if (int_cur & 1)
			count++;
	}

	return (count);
}

