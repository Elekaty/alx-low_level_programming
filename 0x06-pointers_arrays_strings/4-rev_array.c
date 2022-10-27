#include "main.h"

/**
 * reverse_array - Reverse the content of the an array of integers
 * @a: The array of the integers to be reversed
 * @n: The number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int num, num1;

	for (num1 = n - 1; num1 >= n / 2; num1--)
	{
		num = a[n - 1 - num1];
		a[n - 1 - num1] = a[num1];
		a[num1] = num;
	}
}
