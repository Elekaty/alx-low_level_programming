#include "main.h"

/**
 * print_number - print
 * @n: - variable
 * Return: Always 0
 *
 */
void print_number(int n)
{
	unsigned int z;
	int i, j;

	j = 10;

	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar (n + '0');
	}

	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar ('-');
		}
		z = n;
	while (z / j > 9)
	{
		b = b * 10;
	}
	while (j > 0)
	{
		i = z / j;
		z = z % j;
		_putchar (m + '0');
		j = j / 10;
	}
	}
}
