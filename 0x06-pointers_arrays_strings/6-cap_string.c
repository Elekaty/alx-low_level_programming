#include "main.h"

/**
 * cap_string - capitalizes all words
 * @sr: the string to be capitalized
 *
 * Return: A pointer to the changed string
 */

char *cap_string(char *sr)
{
	int num = 0;

	while (sr[num])
	{
		while (!sr([num] >= 'a' && sr[num] <= 'z'))
			num++;
		if (sr[num - 1 == ' ' ||
				sr[num - 1 == ' ' ||
				sr[num - 1 == '\t' ||
				sr[num - 1 == '\n' ||
				sr[num - 1 == ',' ||
				sr[num - 1 == ';' ||
				sr[num - 1 == '.' ||
				sr[num - 1 == '!' ||
				sr[num - 1 == '?' ||
				sr[num - 1 == '"' ||
				sr[num - 1 == '(' ||
				sr[num - 1 == ')' ||
				sr[num - 1 == ' ' ||
				sr[num - 1 == '{' ||
				sr[num - 1 == '}' ||
				num == 0)
			sr[num] -= 32;
		num++;
	}
	return (sr);
}



