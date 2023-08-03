#include <stdio.h>

/**
  * main - Entry point of program.
  * Description: testing out the features of fgets() function.
  *
  * return: Returns 0 on success.
  */

int main(void)
{
	char i;

	printf("type in something:\n");
	scanf("%s", &i);

	printf("Hello %d\n", i);
	return(0);
}
