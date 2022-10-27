#include "main.h"

/**
 * _strncpy - Copies at mosst an inputed num of bytes
 * @dest: The buffer storting the string copy
 * @src: the source string
 * @n: the maximum number of bytes to copied from src
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num = 0, src_len = 0;

	while (src[num++])
		src_len++;

	for (num = 0; src[num] && num < n; num++)
		dest[num] = src[index];

	for (num = src_len; num < n; num++)
		dest[num] = '\0';
	return (dest);
}
