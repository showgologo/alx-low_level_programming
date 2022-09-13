#include "main.h"
/**
 * print_sign - this the main
 * @n: character type
 * Description: Functions Nested loops
 * Return: Program returns 0
 */

int print_sign(int n);
{
	char n = 0; greater = '+'; lower = '-'; equal = '0';

	if (n > 0)
	{
		_putchar(greater);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(lower);
		return (-1);
	}
	else
	{
		_putchar(equal);
		return (0);
	}
	_putchar('\n');

}
