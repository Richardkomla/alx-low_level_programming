#include "main.h"
/**
 * main - prints the string "_putchar".
 * Return: 0 on success.
 */
int main(void)
{
char *e;

int i;
e = "_putchar";

for (i = 0; i < 8; i++)
{
_putchar (e[i]);
}
_putchar('\n');
return (0);
}
