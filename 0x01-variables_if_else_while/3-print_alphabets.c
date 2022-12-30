#include <stdio.h>

/**
 * main - capital and small
 * @capital_letter
 * @small_letter
 *
 * Return : always return 0
 */

int main(void)
{
	char capital_letter = 'A';
	char small_letter = 'a';

	for (small_letter = 'a'; small_letter <= 'z'; small_letter++)
	{
		putchar(small_letter);
	}


	for (capital_letter = 'A'; capital_letter <= 'Z'; capital_letter++)
	{
		putchar(capital_letter);
	}
	putchar('\n');
	return (0);
}


