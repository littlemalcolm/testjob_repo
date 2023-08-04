#include "main.h"

/**
  * times_table - Prints the 9 times table, starting with 0.
  * Takes no argument.
  *
  * return: Return value nit specified.
  */

void times_table(void)
{
	int i = 0;
       	int j;
	int k = 0;


	while (i <= 9)
	{
		for (j = 0; j <= 9; j++)
		{
			int update;


			update = (k * 9);
			_putchar('0' + update);
			_putchar(44);
			_putchar(32);
			k++;
		}
		_putchar('\n');
		i++;
		continue;
	}
}
