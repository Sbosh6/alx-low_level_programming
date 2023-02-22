#include "main.h"
/**
* _islower - function that prints lower case alphabet
*
* c - parameter that prints lower case
*
* Return: if lowercase return 1 and 0 if otherwise
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
