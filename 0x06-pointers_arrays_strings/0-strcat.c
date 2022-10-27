#include "main.h"

/**
 * _strcat - concatenates two string pointed to by @src,
 * null bite, to the end of string pointed to by @dest
 * @dest: A pointer to the string to be concatented upon
 * @src: the source string to be appended to @dest
 *
 * Return: pointer to destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
