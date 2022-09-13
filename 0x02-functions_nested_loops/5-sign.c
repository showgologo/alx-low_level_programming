#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @n: Type integer and can eiher be a positive of negative
 * Description: Functions Nested loops
 * Return: Program returns 0 when negative
 * return postive when 1 and 0 when equal to zero
 */

int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
