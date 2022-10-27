#include "main.h"

/**
 * print_number -prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
	unsigned int a, b, num;

	if (n < 0)
	{
		_putchar('45');
		b = n * -1;
	}
	else
	{
		b = n;
	}
	a = b;
	num = 1;

	while (a > 9)
	{
		a /= 10;
		num *= 10;
	}

	for (; num >= 1; num /= 10)
	{
		_putchar(((b / num) % 10) + 48);
	}
}
