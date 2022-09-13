#include "main.h"
/**
 * main - this the main
 * Description: Functions Nested loops
 * Return: Program returns 0
 */

int main(void)
{
	char my_char[] = "_putchar";
	int loop = 0;

	while (my_char[loop] != '\0')
	{
		_putchar(my_char[loop]);
		loop++;
	}
	_putchar('\n');

	return (0);
}

