#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a = 1;
	char b = 'G';
	double c = 3.14;
	int y = 't';

	printf("Hello World!\n");

/**
  * Printing the variable defined above along with their sizes.
  */
	printf("Hello i am an integer. My value is %d and my size is %lu byte(s).\n", a, sizeof(a));
	printf("Hello i am a character. My value is %c and my size is %lu byte(s).\n", b, sizeof(b));
	printf("Hello i am a floating point. My value is %lf and my size is %lu byte(s).\n", c, sizeof(c));
	printf("Value is %d, Size is %lu bytes.\n", y, sizeof(y));

	exit(EXIT_SUCCESS);
}
