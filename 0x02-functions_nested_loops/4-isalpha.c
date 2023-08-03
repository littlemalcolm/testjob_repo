#include "main.h"

/**
  * _isalpha - Checks for alphabetic character.
  * Description: takes an argument c.
  * @c: character to check.
  *
  * Return: returns 1 if c is a letter, lower or uppercase.
  */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
