#include "main.h"

/**
  * _abs(int) - computes the absolute value of an integer.
  * Description: takes an integer argument.
  *
  * Return: return 1 if succesful, and zero otherwise.
  */

int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else
	{
		return (x);
	}
}
