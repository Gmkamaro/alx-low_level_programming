#include <stldio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (int count = 0; count < MAXSTRING; count++)
	{
		if (msg[count] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(msg[count]);
	}
	return (1);
}
