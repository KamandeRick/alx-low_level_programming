#include "main.h"
/**
 * print_rev - prints a string in revers followed by a new line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int ptr = 0;
	int n;

	while (*s != '\0')
	{
		ptr++;
		s++;
	}
	s--;
	for (n = ptr; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
