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
	int num;
	int num1;

	num = 0;
	while (dest[num] != '\0')
	{
		num++;
	}

	num1 = 0;
	while (src(num1) != '\0')
	{
		dest[num] = src[num1];
		num++;
		num1++;
	}
	dest[num] = '\0';
	return (dest);
}
