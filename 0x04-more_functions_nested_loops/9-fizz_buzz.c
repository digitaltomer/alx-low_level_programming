#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		switch ((i % 5 == 0) << 1 | (i % 3 == 0))
		{
			case 0: printf(" %d\n", i); break;
			case 1: printf(" Fizz\n"); break;
			case 2: printf(" Buzz\n"); break;
			case 3: printf(" Fizz Buzz\n"); break;
		}
	}
}

