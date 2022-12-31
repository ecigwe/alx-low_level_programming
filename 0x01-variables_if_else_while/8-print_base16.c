#include <stdio.h>

/**
 * main - print hexadeximal number
 * Return: Always 0.
 */

int main(void)
{
	int number = 0;
	char alphabet = 'a';

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');
	return (0);
}
