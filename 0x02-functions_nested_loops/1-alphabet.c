#include "main.h"


/**
  * print_alphabet - Prints the alphabet in lowercase, followed by a new line..
  * Takes no argument.
  * use of _putchar twice in program.
  *
  * Return: return value not specified.
  */

void print_alphabet(void)
{
	int i;


	for (i = 97; i <= 122; i++)
		_putchar(i);

	_putchar ('\n');
}
