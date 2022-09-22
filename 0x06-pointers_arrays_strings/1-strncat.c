#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination for the string
 * @src: source for the string
 * :n: number of bytes in the string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0, src[i] != '\0'; && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
