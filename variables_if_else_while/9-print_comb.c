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
	int d1;

	for (d1 = 48; d1 <= 57; d1++)
	{

			putchar(d1);

			if(d1 > 56)
			{
				putchar (46);
				break;
			}
			putchar(44);
			putchar(32);

	}
	putchar (10);

	return (0);
}
