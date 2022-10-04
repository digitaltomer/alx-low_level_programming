#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: number of arguments in a program
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
