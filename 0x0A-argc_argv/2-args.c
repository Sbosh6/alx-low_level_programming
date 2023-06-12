#include <stdio.h>
#include "main.h"

/**
 * main - function to print passed arguments
 * @argc: is the number of arguments
 * @argv: is an array of arguments
 * Return: returns zero to the program
 */

int main(int argc, char *argv[])
{
int x;

for (x = 0; x < argc; x++)
printf("%s\n", argv[x]);

return (0);
}
