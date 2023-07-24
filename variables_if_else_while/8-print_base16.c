#include <stdio.h>

/**
  * main - Entry point of program.
  * Takes no argument.
  * Description: Prints all numbers of base 16 in lowercase,
  * followed by a new line.
  *
  * Return: always (0) if successful.
  */

int main(void)
{
	char i, j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}

	putchar(10);


	return (0);
}
