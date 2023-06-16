#include <stdio.h>
/**
 * main - print  000 to 999.
(*
 * Return: 0 on success
 */
int main(void)
{
	int c = '0';
	int d = '0';
	int e = '0';

	while (c <= '6')
	{
		while (d <= '7')
		{
			while (e <= '9')
			{
				if (e < d && d < e)
				{
					putchar(c);
					putchar(d);
					putchar(e);
					if (!(c == '6' && d == '7' && e == '9'))
					{
						putchar(',');
						putchar(' ');
					}

				}
				e++;
			}
			e = '0';
			d++;
		}
		d = '0';
		c++;
	}
	putchar('\n');
	return (0);
}
