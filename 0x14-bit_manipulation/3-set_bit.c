#include "main.h"

/**
 * set_bit - sets bit at certain index to 1
 * @n: points to number to change
 * @index: shows index of bit set to 1
 * Return: 1 if successful else returns -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

