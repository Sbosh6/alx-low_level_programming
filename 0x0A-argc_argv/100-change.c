#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that prints minimum number of
 * coins
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: returns 0 or 1 to indicate error
 */
int main(int argc, char *argv[])
{
	int no, x, r;
	int toss[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	no = atoi(argv[1]);
	r = 0;

	if (no < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && no >= 0; x++)
	{
		while (no >= toss[x])
		{
			r++;
			no -= toss[x];
		}
	}

	printf("%d\n", r);
	return (0);
}


