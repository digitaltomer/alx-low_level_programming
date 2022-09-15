#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: input the character
 * Return: Returns 1 if c is digit otherwise 0
 */

int _isdigit(int c)
{
	char i = '0';

	int _isdigit = 0;

	for (; i =< '9'; i++)
	{
		if (i == c)
		{
			_isdigit = 1;
			break;
		}
	}
	return (_isdigit);
}

