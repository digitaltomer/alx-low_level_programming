#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: Success 0
 */

char *leet(char *s)
{
	int k, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[k] == a[j])
			{
				s[k] = b[j];
			}
		}
	}
	return (s);
}
