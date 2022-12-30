#include <stdio.h>

/**
 * main - returns alphabets
 *Rrturn: always returns 0
 */

int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			continue;
		}
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
