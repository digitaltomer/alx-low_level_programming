#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: evaluates the string
 */

void rev_string(char *s)
{
	int i, len, tmp;
	char j

	len = 0;
	tmp = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	tmp = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		j = s[i];
		s[i] = s[tmp];
		s[tmp--] = j;
	}

}
