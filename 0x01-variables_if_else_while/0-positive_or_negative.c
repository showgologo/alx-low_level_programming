#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - This is the main code
 * Description: code that print a random number
 * if zero, positive, or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%i is negative\n", n);
	else if (n > 0)
		printf("%i is positive\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
}

