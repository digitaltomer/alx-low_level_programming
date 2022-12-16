#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: input character
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	char upper = 'A';

	while (upper <= 'Z')
	{
		if (c == upper)
			return (1);
		upper++;
	}
	return (0);
}
