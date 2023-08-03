#include <stdio.h>
#include "main.h"

/**
  * _islower - checks for lowercase character.
  * Description: takes no argument.
  * @c: Character to check for.
  *
  * Return: returns 1 if c is lowercase.
  * returns 0 otherwise
  */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
