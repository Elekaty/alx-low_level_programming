#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: input
 *
 * Return: the value of str
 */

char *leet(char *str)
{
	int num = 0, num2;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (num = 0; str[num] != '\0'; num++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			if (str[num] == s1[num2])
			{
				str[num] = s2[num2];
			}
		}
	}
	return (str);
}
