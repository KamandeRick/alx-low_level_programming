#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * including the terminating null byte
 * @dest: destination to copy to
 * @src: source to copy from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

