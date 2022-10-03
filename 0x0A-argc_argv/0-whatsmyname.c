#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name, followed by a new line
 * @argc: number of arguments counts
 * @argv: array of arguments
 *
 * Return: Success (0)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
