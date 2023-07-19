#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main: Entry point of program
  * Program assigns a random number to n each time it is executed.
  * takes no argument
  *
  * return: Returns o if successful.
  */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);

	/* your code goes there */
	return (0);
}
