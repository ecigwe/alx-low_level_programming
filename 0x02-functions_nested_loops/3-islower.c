#include "main.h"

/**
 * _islower - check for lowe case characters
 * @c : character to be checked
 * Return: returns 1 if lowercase , returns 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
