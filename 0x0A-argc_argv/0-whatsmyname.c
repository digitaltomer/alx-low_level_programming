#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: number of arguments counts
 * @argv: array of arguments
 *
 * Return: Success (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < agrc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf('\n');
	return (0);
}
