#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * program that generates random valid passwords
 * for the program
 * Return: 0
 */

int main(void)
{
	int i, j, k;
	int crack[100];

	j = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		crack[i] = rand() % 78;
		j += (crack[i] + '0');
		putchar(crack[i] + '0');

		if ((2772 - j) - '0' < 78)
		{
			k = 2772 - j - '0';
			crack += k;
			putchar(k + '0');
			break;
		}
	}
	return (0);
}

