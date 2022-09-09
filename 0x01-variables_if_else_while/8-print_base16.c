#include <stdio.h>
/**
 * main - This is the main block
 * Description: print num zero to nine a to f
 * Return: Return  0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}

	char i = 'a';

	while (i <= 'f')
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
