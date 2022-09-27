#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to evaluate
 * @accept: another string
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, len;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		len = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] = accept[g])
			{
				c++;
				len = 1;
			}
		}
		if (len == 0)
		{
			return (c);
		}
	}

	return (0);
}
