#include "main.h"
/**
 * main - this the main
 * print_alphabet - print alphabet
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
