#include "main.h"
#include <stdlib.h>
/**
 * argstostr - is the main entry
 * @ac: is the int input
 * @av: double pointer array
 * Return: returns zero
 */
char *argstostr(int ac, char **av)
{
	int x, n, y = 0, z = 0;
	char *strg;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (n = 0; av[x][n]; n++)
			z++;
	}
	z += ac;

	strg = malloc(sizeof(char) * z + 1);
	if (strg == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (n = 0; av[x][n]; n++)
		{
			strg[y] = av[x][n];
			y++;
		}
		if (strg[y] == '\0')
		{
			strg[y++] = '\n';
		}

		

	}
	return (strg);
}


