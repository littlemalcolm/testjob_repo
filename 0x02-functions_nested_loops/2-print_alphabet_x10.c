#include <stdio.h>
#include "main.h"


/**
  * print_alphabet_x10: prints 10 times the alphabet, 
  * in lowercase, followed by a new line.
  * Takes no argument.
  * Use _putchar twice in your code.
  *
  * Return: return value not specified.
  */



void print_alphabet_x10(void)
{
	int i;
	int j = 48;

	while (j <= 57)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
		continue;
	}
}
