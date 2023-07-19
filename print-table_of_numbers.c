#include <stdio.h>

int main()
{
	int number, i, mul;

	printf("Enter a number\n");
	scanf("%d", &number);

	for (i = 0; i <= 12; i++)
	{
		mul = i * number;

		printf("%d * %d = %d\n", number, i, mul);
	}
}
