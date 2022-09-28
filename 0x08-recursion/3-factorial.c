#include "main.h"

/**
 * int factorial - returns the factorial of a given number
 * @n: interger number to evaluate
 *
 * Return: -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n + factorial(n - 1));
}