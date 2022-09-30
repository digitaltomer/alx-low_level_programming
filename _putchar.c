#include <unistd.h>

/**
 * _putchar - execute characters in C
 *
 * return: (0) - success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
