#include "main.h"
/**
 * _puts - outputs a string followed by new line to standard output
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
