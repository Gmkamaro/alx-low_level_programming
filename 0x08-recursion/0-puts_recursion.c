#include "main.h"

/**
 * _puts_recursion - print a string likethe function put but through recursion
 *
 * @s: is the pointer of the given string.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
