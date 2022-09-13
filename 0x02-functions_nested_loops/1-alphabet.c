#include "main.h"
/**
 * print_alphabet - this the main
 * Description: Functions Nested loops
 * Return: Program returns 0
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
