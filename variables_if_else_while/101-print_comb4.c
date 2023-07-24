#include <stdio.h>


/**
  * main - Entry point of program.
  * Takes no argument.
  * Description: Prints all posible different combinations of three digits.
  * Print only the smallest combinations of three digits., in ascending order.
  * only putchar function allowed, 6 times.
  * variable type char not allowed.
  *
  * Return: returns 0 on success.
  */


int main(void)
{
	int d1, d2, d3;

	for (d1 = 48; d1 <= 57; d1++)
	{
		for (d2 = d1 + 1; d2 <= 57; d2++)
		{
			for (d3 = d2 + 1; d3 <= 57; d3++)
			{
				putchar(d1);
				putchar(d2);
				putchar(d3);
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar (10);

	return (0);

}
