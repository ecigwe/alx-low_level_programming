#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int number = 0;

	for (number = 0; number <= 10; number++)
	{
		char alphabet = 'a';

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);

		}
		_putchar('\n');
	}
}
