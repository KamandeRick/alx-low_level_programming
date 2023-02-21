#include <stdio.h>

/**
 * main - print lowercase alphabet except e and q
 * Return: Always 0
 */

int main(void)

{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		if (lc == 'q' || lc == 'e')
		{
			continue
		}
		else
		{
			putchar (lc);
		}
	putchar ('\n');
	return (0);
}
