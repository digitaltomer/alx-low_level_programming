#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s - string to evaluate
 * @accept: another string
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
