#include <stdio.h>

/**
 * main - print numbers with putchar
 * Return: Always 0
 */

int main(void)
{
	int number = 0;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');

		if (number == 9)
			continue;

		putchar(',');

		putchar(' ');
	}
	putchar('\n');
	return (0);
}
