#include <stdio.h>
/**
 * main - prints alphabets in lower case
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
		}
	putchar('\n');
	return (0);
}


