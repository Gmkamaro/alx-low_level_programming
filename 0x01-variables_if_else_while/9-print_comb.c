#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
		if (c <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(' ');

	return (0);
}
