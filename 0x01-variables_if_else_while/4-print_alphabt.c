#include <stdio.h>
/**
 * main - This is the  main block
 * Description: Use `putchar` to print all letters but the letter 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
			putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
