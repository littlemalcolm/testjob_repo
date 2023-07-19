#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main(void)
{
	int number, last_digit;


	printf("Enter a number: ");
	scanf("%d", &number);

	last_digit = number % 10;

		printf("the number is %d\n", number);
		printf("last_digit is %d\n", last_digit);


	return (0);
}
