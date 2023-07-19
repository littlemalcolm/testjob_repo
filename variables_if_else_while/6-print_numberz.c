#include <stdio.h>

/**
  * main - Entry point of program.
  * Takes no argument.
  * Description: Prints all single digit numbers of base 10
  * starting from 0, followed by a new line.
  *
  * return: Returns (0) on success.
  */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
