#include <stdio.h>
/**
 * main - This is the main block
 * Description: print num zero to nine
 * Return: Return  0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar("%d", a);
		a++;	
	}

	putchar('\n');

	return (0);
}
