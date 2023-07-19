#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * Program assigns a random number to the variable n each time it is executed.
  * main: Entry point of program
  * takes no argument
  * 
  * return: Returns 0 if successful.
  */

int main(void)
{
	int n;

	

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit = n % 10;

	printf("n is %d and last digit of n is %d\n", n, last_digit);


	return (0);
}
