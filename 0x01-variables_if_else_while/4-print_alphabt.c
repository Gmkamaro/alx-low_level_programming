#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'q' || 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
