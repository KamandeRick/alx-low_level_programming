#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: input string to check in
 * @accept: input string to check for
 * Return:  a pointer to the matching byte or 0 if no byte found
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}
