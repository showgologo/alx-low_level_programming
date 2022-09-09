#include <stdio.h>
/**
 * main - main block
 * Description: print single digit number seperated 
 * by , and space
 * Return: Return 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar (a + '0');
		putchar (',');
		putchar (' ');
	}
	putchar('\n');
}
