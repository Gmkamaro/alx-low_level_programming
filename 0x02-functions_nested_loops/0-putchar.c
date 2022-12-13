#include "stdio.h"
#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char slm[] = "_putchar";
	int i = 0;

	while (slm[i] != '\0')
	{
		_putchar(slm[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
