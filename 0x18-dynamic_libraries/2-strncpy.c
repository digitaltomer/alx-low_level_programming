#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination of string
 * @src: source of string
 * @n: integer in the string
 *
 * Return: points to the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
