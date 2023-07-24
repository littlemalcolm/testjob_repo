#include <stdio.h>

/**
  * main - Entry point of program.
  * Takes no arguments.
  * Description: prints lowercase aplhabet in reverse.
  * followed by a new line.
  *
  *return: Returns (0) on success.
  */

int main(void)
{
	int i;


	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}

