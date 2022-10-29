#include <stdio.h>
/**
 * get_endianness - Checks the systems Byte order
 * Return: Returns 0 if big endian 1 if little endian
 */
int get_endianness(void)
{
	int x;
	int big_or_little;

	x = 1;
	big_or_little = (int) (((char *)&x)[0]);
	return (big_or_little);
}
