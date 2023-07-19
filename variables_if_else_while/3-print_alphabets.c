#include <stdio.h>

/**
  * program prints the alphabet in lowercase
  * and uppercase,followed by a new line.
  * main - entry point of the program.
  * takes no argument.
  *
  * only putchar function allowed.
  * putchar fucntion to be used thrice only.
  * return: Returns (0) always on success.
  */

int main()
{
	int i, j;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
		putchar(10);
	}

	for (j = 65; j <= 90; j++)
	{
		putchar(j);
		putchar(10);
	}
		
	return(0);
}
