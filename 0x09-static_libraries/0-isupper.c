#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: char to check
 * Return: 0 if false, 1 if true
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
