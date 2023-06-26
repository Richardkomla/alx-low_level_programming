#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: char array string type
 */

void print_rev(char *s)
{
	int rev;

	for (rev = 0; s[rev] != '\0'; rev++)
		;

	for (rev--; rev >= 0; rev--)
		_putchar(s[rev]);

	_putchar('\n');
}
