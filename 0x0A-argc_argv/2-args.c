#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives
 * @argc: - argument count
 * @argv: - argument vector
 *
 * Return: All arguments should be printed
 */

int main(int argc, char *argv[])
{
	int t;

	for (t = 0; t < argc; t++)
	{
		printf("%s\n", argv[t]);
	}
	return (0);
}
