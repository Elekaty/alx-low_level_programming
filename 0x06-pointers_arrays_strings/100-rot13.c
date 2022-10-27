#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
	int num1 = 0, num2;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'D', 'E','F','G', 'H', 'I', 'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'}
	while (str[num1])
	{
		for (num2 = 0; num2 < 52; num++)
		{
			if (str[num1] == alphabet[num2])
			{
				str[num1] == rot13key[num2];
				break;
			}
		}
		num1++;
	}
	return (str);
}
