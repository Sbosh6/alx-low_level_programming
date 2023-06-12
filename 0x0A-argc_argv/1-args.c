#include "main.h"
#include <stdio.h>

/*
 * main - Is the function to print the number
 * of arguments passed.
 * @argc: is the nummber of arguments
 * @argv: is an array of strings
 * Return: returns zero to end the program
 */


int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
