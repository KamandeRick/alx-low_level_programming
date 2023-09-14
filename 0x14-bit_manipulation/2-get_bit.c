#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to find
 * @index: bit index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b_val;

	if (index > 63)
		return (-1);

	b_val = (n >> index) & 1;

	return (b_val);
}

