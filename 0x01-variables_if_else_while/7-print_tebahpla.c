#include <stdio.h>
/**
 * main - this is the main block
 * Description: print alphabet in reverse
 * Return: Return 0
 */
int main(void)
{

	char i = 'z';
	
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
