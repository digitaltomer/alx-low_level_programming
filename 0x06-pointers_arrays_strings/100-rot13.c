#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: Success 0
 */

char *rot13(char *)
{
	int k, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (j = 0; s[j] != 0; j++)
		{
			if (s[k] == a[j])
			{
				s[k] = b[j];
				break;
			}
		}
	}
	return (s);
}
