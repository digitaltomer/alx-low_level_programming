#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to evaluate
 *
 * Return: natural square root of a number, -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recursive to find actual sqrt
 * @n: number to evaluate 
 * @i: iterator
 *
 * Return: the sqrt needed
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == 0)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
