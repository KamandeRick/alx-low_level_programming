#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers btn n-98
 * numbers are separated by commas and spaces
 * @n: number at start of print
 */

void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d ", n);
	}
	else if ( n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else 
			{
				printf("%d ", i);
			}

		}
	}	
	else if (( n <= 98) && (n >= 0))
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf ("%d, ", i);
			}
			else
			{
				printf ("%d ", i);
			}
		}
	}
	else if ( n < 0 )
	{
		for ( i = n; i <= 98; i++)
		{
			if ( i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d ", i);
			}
		}
	}

}
