#include "main.h"

/**
  * print_sign - prints the sign of a number.
  * Description: checks if a number is positive, negative,
  * or if number is zero.
  * takes an integer argument n.
  * @n: character to be checked.
  *
  * Return: returns 1 if number is greater than zero.
  * returns 0 if number is zero.
  * returns -1 if number is negative.
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
