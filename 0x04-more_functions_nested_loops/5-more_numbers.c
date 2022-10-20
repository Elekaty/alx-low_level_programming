#include "main.h"

/**
 * more_numbers - prints 0 tp 14 ten times
 * Return: Always 0
 */
void more_numbers(void)
{
	int a, num;

	for (num = 0; num <= 9; num++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
