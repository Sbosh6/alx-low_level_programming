#include "main.h"
/**
 *  _isalpha - Function that checks for alphabet
 *
 *  c - checks the alphabets either in lowercase or otherwise
 *
 *  Return: 1 if is a letter lowercase or uppercase and 0 if otherwise
 */

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))

		return (1);
	else
		return (0);
}

