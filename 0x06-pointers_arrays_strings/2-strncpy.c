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
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for (a = 0; a < n; a++)

		dest[a] != '\0';

	return (dest);
}
