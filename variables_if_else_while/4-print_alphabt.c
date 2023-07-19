#include <stdio.h>


/**
  * main - Entry point of program.
  * takes no argument.
  * Description: prints alphabets in lowercase except q and e, followed by a new line.
  * 
  * return: Returns (0) on success always.
  */

int main()
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if(i == 101 || i == 113)
			continue;

		putchar(i);
		
	}
	putchar(10);
	return (0);
}
