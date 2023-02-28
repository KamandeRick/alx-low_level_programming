#include "main.h"
/**
 * puts_half - prints half string where
 * if string length is odd lenght = (strng lenght- 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, j, strng;

	strng = 0;

	for (i = 0; str[i] != '\0'; i++)
		strng++;

	j = (strng / 2);

	if ((strng % 2) == 1)
		j = ((strng + 1) / 2);

	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

