
#include <stdio.h>

#include <stdlib.h>

#include "main.h"

/**
* _strdup - function returns a pointer to the duplicated string
* @str: character
* Return: returns zero
*/

char *_strdup(char *str)

{

char *x;

int a, b = 0;



if (str == NULL)

return (NULL);

a = 0;

while (str[a] != '\0')

a++;



x = malloc(sizeof(char) * (a + 1));



if (x == NULL)

return (NULL);



for (b = 0; str[b]; b++)

x[b] = str[b];



return (x);

}

