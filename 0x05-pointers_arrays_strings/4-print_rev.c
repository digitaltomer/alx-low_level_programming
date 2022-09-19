#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line
 * @s: prints a string, in reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i)

		_putchar(str[--i]);

	_putchar('\n');
}
