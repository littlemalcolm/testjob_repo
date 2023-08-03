#include "main.h"

/**
  * print_last_digit - prints the last digit of a number.
  * takes an integer argument.
  * @x: value to be checked.
  *
  * Return: return value not specified.
  */

int print_last_digit(int x)
{
	int last_digit = x % 10;

	if (last_digit < 0)
	{
		last_digit = (last_digit * (-1));
	}

	_putchar(last_digit + '0');


	return (last_digit);
}
