#include <stdio.h>


/**
  * prints the alphabet in lowercase, followed by a new line.
  * main - entry point of program.
  * takes no argument.
  *
  * print using putchar function only.
  * only use putchar twice in the code.
  * return: returns 0 always if successful.
  */

int main()
{
	int i;


	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
		putchar('\n');

	return (0);
	
}
