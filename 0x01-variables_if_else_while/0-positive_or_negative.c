#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Main code goes here
 * Description: Get a number at random and
 * print the number sign(Positive or negative)
 * Return: Returns 0
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
