#include <stdio.h>
/**
 * main - This is the main block
 * Description: Print double digits from 0 to 99.
 * Return: Return 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 100; i++)
	{
		j = i / 10;
		k = i % 10;

		putchar(j + '0');
		putchar(k + '0');

		if (i < 90)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
