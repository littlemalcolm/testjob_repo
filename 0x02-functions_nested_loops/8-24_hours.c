#include "main.h"

/**
  * jack_bauer - prints every minute of the day of Jack Bauer,
  * starting from 00:00 to 23:59.
  * Description: takes no argument.
  * 
  * return: Return value not specified.
  */

void jack_bauer(void)
{
	int hours = 0;
	int min = 0;

	while (hours < 24)
	{
		while (min < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar (10);
			min++;
		}
		min = 0;
		hours++;
	}
}
