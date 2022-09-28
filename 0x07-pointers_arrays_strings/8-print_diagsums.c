#inlude "main.h"

/**
 * print_diagsums -prints the sum of the two diagonals 
 * of a square matrix of integers
 * @a: the string
 * @size: size 
 * Return: 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int j, num, num1;

	num = 0;
	num1 = 0;

	for (j = 0; j < size; j++)
	{
		num += a[(size * j) + j];
		num1 += a[(size * (j + 1)) - (j + 1)];
	}

	printf("%d, %d\n", num, num1);
}
