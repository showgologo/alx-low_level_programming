#include "main.h"
/**
 * _islower - checking for lower letter
 * @c: character type alphabet
 * Description: Functions Nested loops
 * Return: Program returns 0 if not lowercase and 1 if lowercase
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}
