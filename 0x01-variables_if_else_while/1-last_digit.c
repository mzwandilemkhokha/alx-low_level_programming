#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 * Description: Positive anything is better than negative nothing
 * Return: 0
 */

int main(void)
{
	int n, last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_dig = n % 10;
	printf("Last digit of %d is ", n);
	if (last_dig > 5)
	{
	printf("%d and is greater than 5\n", last_dig);
	}
	else if (last_dig == 0)
	{
	printf("%d and is 0\n", last_dig);
	}
	else
	{
	printf("%d and is less than 6 and not 0\n", last_dig);
	}
	return (0);
}
