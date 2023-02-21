#include <stdio.h>

/**
 * main - prints all combinations of single digit spaced with comma
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
		if (num != 9)
		{
		putchar(',');
		putchar(' ');
		}
	putchar('\n');
	return (0);
	}
}
