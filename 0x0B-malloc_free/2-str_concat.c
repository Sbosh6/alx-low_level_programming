#include "main.h"
#include <stdlib.h>
/**
 * str_concat - adds the ends of input together
 * @s1: second input to concat
 * @s2: first input to concat
 * Return: returns concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *comb;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	comb = malloc(sizeof(char) * (x + y + 1));

	if (comb == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		comb[x] = s1[y];
		x++;
	}

	while (s2[y] != '\0')
	{
		comb[x] = s2[y];
		x++,y++;
	}
	comb[x] = '\0';
	return (comb);
}

