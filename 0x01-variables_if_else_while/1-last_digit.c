#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main -  Entey point
 * return : Always 0
 */
int main(void)
{
	int n, lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastNum);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);

	return (0);
}
