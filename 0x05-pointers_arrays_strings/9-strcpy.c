#include "main.h"

/**
 * *_strcpy - See description
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
int strcpy;

	for (strcpy = 0; src[strcpy] != '\0'; strcpy++)
	{
		dest[strcpy] = src[strcpy];
	}
	dest[strcpy] = '\0';

	return (dest);
}
