#include "main.h"

/**
 * _strncpy - copies one string (or bytes given)
 * @dest: where to copy;
 * @src: string to copy or bytes to copy
 * @n: how many bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int llego, strncpy;

	llego = 0;
	strncpy = 0;
	while (llego != n)
	{
		dest[strncpy] = src[llego];
		if (src[llego] == '\0')
		{
			dest[strncpy] = '\0';
			break;
		}
	       strncpy++;
		llego++;
	}
	while (strncpy != n)
		dest[strncpy++] = '\0';
	return (dest);
}
