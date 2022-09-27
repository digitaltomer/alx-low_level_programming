#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: strings of characters
 * @c: character to evaluate
 * Return: pointer to the first occurrence of the character c in s
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (0);
		}
	}
}
