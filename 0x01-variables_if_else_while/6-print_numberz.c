#include <stdio.h>
/**
 * main - This is the main block
 * Description: print num zero to nine
 * Return: Return  0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}

	putchar('\n');

	return (0);
}
