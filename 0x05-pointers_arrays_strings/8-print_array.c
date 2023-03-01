#include <stdio.h>
#include <string.h>
/**
 * print_array - prints every other charecter
 * @a : int* is a parameter
 * @n : int is a parameter
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}
