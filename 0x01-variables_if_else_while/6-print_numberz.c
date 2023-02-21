#include <stdio.h>

/**
 * main - Prints single digit base 10 numbers using putchar
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar ((num % 10) +  '0');

	putchar('\n');
	return (0);
}
