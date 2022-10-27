#include "main.h"

/**
 * _strncat - joins two strings with n bytes
 * @dest: copy to
 * @src: copy from
 * @n: number of bytes from src to be copie to destd
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int num = 0, dest_len = 0;

	while (dest[num++])
		dest_len++;
	for (num = 0; src[num] && num < n; num++)
		dest[dest_len++] = src[num];

	return (dest);
}
