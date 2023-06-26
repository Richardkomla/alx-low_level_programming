#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: char array string type
 */

void print_rev(char *s)
{
	int stdout;

	for (stdout = 0; s[stdout] != '\0'; stdout++)
		;

	for (stdout--; stdout >= 0; stdout--)
		_putchar(s[stdout]);

	_putchar('\n');
}
