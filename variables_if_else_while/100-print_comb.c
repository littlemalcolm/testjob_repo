#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point of program.
  * Takes no arguments.
  * Description: Prints possible combinations of single-digit numbers.
  * separated by comma, and in ascending order.
  * only putchar function allowed.
  *
  * Return: returns 0 on success.
  */

int main(void)
{
	int d1, d2;

	for (d1 = 48; d1 <= 57; d1++)
	{
		for (d2 = d1 + 1; d2 <= 57; d2++)
		{
			putchar(d1);
			putchar(d2);
			putchar(44);
			putchar(32);
		}
		putchar (10);
		continue;

		return (0);
	}
}
