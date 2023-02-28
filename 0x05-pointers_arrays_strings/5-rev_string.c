#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 *  * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int incrmnt = 0;
	int n;

	while (s[incrmnt] != '\0')
	incrmnt++;
	for (n = 0; n < incrmnt; n++)
	{
		incrmnt--;
		rev = s[n];
		s[n] = s[incrmnt];
		s[incrmnt] = rev;
	}
}

