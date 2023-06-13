#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * scan_num - checks the strings for digits
 * @strg: array of strings
 *
 * Return: returns zero to end execution
 */
int scan_num(char *strg)
{

	unsigned int c;

	c = 0;
	while (c < strlen(strg))

	{
		if (!isdigit(strg[c]))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/**
 * main - Prints the name of a program
 * @argc: is the number of arguments
 * @argv: the Arguments
 *
 * Return: returns zero to end execution
 */

int main(int argc, char *argv[])

{


	int a;
	int str_int;
	int result = 0;

	a = 1;
	while (a < argc)
	{
		if (scan_num(argv[a]))

		{
			str_int = atoi(argv[a]);
			result += str_int;
		}


		else
		{
			printf("Error\n");
			return (1);
		}

		a++;
	}

	printf("%d\n", result);

	return (0);
}

