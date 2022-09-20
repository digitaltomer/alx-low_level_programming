#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: to evaluate string
 */

void puts2(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	len -= 1;

	for (i = 0; i <= len; i += 2)
	{
		_putchar(str[1]);
	}
	_putchar('\n');
}
