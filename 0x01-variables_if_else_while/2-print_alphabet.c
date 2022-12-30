#include <stdio.h>
/**
 * main - prints lowercase alphabets
 *
 * Return : always returns 0
 *
 */

int main(void)
{
	char i = 'a';


	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
