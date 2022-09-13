#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i = 1;
	do
	{
		_putchar("9 * %c = %c\n", i, 9 * i);
		i++;
	} while (i <= 10);
	return 0;
}
