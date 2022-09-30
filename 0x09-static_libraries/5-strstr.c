#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: main c string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[a]);
	}
	return (0);
}
