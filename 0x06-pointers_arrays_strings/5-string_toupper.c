#include "main.h"

/**
 * string_toupper - Changes all lowercase letter to uppercase
 * @n: pointer
 * Return: char
 */
char *string_toupper(char *n)
{
	int num;

	num = 0;

	while (n[num] != '\0')
	{
		if (n[num] >= 'a' && n[num] <= 'z')
			n[num] = n[num] - 32;
		num++;
	}

	return (n);
}
