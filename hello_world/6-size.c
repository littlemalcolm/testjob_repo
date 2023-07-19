#include <stdio.h>

/**
  * main - Entry point of program.
  * takes no argument.
  * program that prints the size of various types
  * on the computer it is compiled and run on.
  *
  * Return: main returns 0 (always on success).
  */

int main(void)
{
	printf("Size of a char: %lu\n", sizeof(char));
	printf("Size of an int: %lu\n", sizeof(int));
	printf("Size of a long int: %lu\n", sizeof(long int));
	printf("Size of a long long int: %lu\n", sizeof(long long int));
	printf("Size of a float: %lu\n", sizeof(float));

	return (0);
}
