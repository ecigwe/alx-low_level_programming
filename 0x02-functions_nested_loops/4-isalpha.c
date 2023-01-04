#include "main.h"

/**
 * _isalpha - check if character is alphabet
 * @c : is character to be checked
 * Return: return 1 if character is alphabet lower case
 * or upper case , return 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
