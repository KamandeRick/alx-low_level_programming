#include <stdio.h>

/**
 * main - prints all combinations of single digit spaced with comma
 * Return: Always 0
 */

int main(void)
{
	int num;
	for(num = 0; num <= 9; num ++)
		if(num !=9)
		putchar(num);
		putchar(',');
		putchar(' ');
		else 
		putchar(num);
	return (0)
}
