#include "main.h"
/**
 * _strchr - Locates character in a string
 * @s: input string
 * @c: character to locate
 * Return: pointer to 1st occurence of char c, 0 if char c not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
