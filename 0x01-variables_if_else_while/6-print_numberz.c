#include <stdio.h>

/*
 * main- returns alphabets
 * @intToAscii: intToAscii always returns ascii of number
 * Return: always returns zero
 */

int intToAscii(int number)
{
	return ('0' + number);
}

int main(void)
{
	int number = 0;

	for (number = 0; number < 10; number++)
	{
		int num = (char)intToAscii(number);

		putchar(num);
	}
	putchar('\n');
	return (0);
}
