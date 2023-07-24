#include <stdio.h>

/**
  * main - Entry point of program.
  * Takes no argument.
  * Description: Prints all possible combinations of two two-digit numbers.
  * Numbers should range from 0 to 99.
  * All numbers should be printed with two digits, i.e 1 printed as 01.
  * Number combinations should be Separated by comma and space.
  * Printed in ascending order.
  * Only putchar function allowed, to be used max of 8 times.
  * Variable type char not allowed.
  *
  * Return: returns 0 on success always.
  */

int main(void)
{
	int d1, d2, d3, d4;


	for (d1 = 48; d1 <= 57; d1++)
	{
		for (d2 = 48; d2 <= 57; d2++)
		{
			for (d3 = 48; d3 <= 57; d3++)
			{
				for (d4 = d3 + 1; d4 <= 57; d4++)
				{

					putchar(d1);
					putchar(d2);
					putchar(32);
					putchar(d3);
					putchar(d4);
					putchar(44);
					putchar(32);
					continue;

				}
			}
		}
		putchar (10);


		return (0);
	}
}
