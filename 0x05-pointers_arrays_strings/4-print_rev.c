#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line
 * @s: prints a string, in reverse
 */

void print_rev(char *s)
{
	int j = 0;

	while (s[j] != '\0')
		j++;

	while (j)

		_putchar(s[--j]);

	_putchar('\n');
}
