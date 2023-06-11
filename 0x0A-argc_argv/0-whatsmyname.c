#include "main.h"
#include <stdio.h>

/*
 * main - prints the name of the program
 * @argc: is the argument count
 * @argv: is the array of strings
 * Return: ends the function
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
