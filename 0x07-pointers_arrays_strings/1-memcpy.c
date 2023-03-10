#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: memory where n bytes is copied to
 *@src: memory area where n bytes copied from
 *@n: number of bytes
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

