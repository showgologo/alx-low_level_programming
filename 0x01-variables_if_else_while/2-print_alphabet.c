#include <stdio.h>
/**
 * main - This is the main code
 * Description: printing alphabet in lowercase using 
 * putchar function
 * Return: 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
