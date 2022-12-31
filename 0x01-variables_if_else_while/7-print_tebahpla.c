#include <stdio.h>

/**
 * main- returns positive alphabets
 * Return: always returns zero
 */

int main(void)
{
	char alphabet = 'z';

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
