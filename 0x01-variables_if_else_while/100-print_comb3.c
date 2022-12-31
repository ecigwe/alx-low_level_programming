#include <stdio.h>
/**
 * main - print double digit integers
 * Return: Always return 0
 */

int main(void)
{
	int number, number1;

	for (number = 0; number < 9; number++)
	{
		for (number1 = number + 1; number1 < 10; number1++)
		{
			putchar((number % 10) + '0');
			putchar((number1 % 10) + '0');

			if (number == 8 && number1 == 9)
				continue;

			putchar(',');

			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
