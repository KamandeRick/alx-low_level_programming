#include "main.h"
/**
 * puts2 - prints every othercharater of a string followed by a new line
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int j = 0;
	char *k = str;
	int i;

	while (*k != '\0')
	{
		k++;
		longi++;
	}
	j = longi - 1;
	for (i = 0 ; i <= j ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar
