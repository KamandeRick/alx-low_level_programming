#include <stdio.h>

/**
 * main - print lowercase alphabet with new line
 * Return: Always 0
 */

int main(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
	putchar('\n');
	return (0);

}
