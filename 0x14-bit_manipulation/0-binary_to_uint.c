#include "main.h"

/**
 * binary_to_uint - creates an int out of a binary number
 * @b: binary number string
 * Return:new int converted from binary
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int value = 0;

	if (!b)
		return (0);

	for (int x = 0; b[i]; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);

		value = (value << x) | (b[x] - '0');
	}

	return (value);
}
