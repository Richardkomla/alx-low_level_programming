#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates and array of char
 * @c: the strings
 * @size: the size of the array
 *
 * Return: in punters.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *richard;

	i = 0;

	if (size == 0)
		return (NULL);
	richard = malloc(sizeof(char) * size);
	if (richard == NULL)
		return (NULL);

	while (i < size)
	{
		*(richard + i) = c;
		i++;

	}
	return (richard);
}
