#include <stdio.h>

int main()
{
	int a, b, add, sub, mul, div, modu;
	char operator;


	
	printf("Kindly enter the symbol of the arithmetic you want to perform, thanks.\n");
	printf("\n");
	printf("\n");
	scanf("%c", &operator);

	printf("kindly enter two numbers you want to perform arithmetic on.\n");
	printf("\n");
	printf("\n");
	scanf("%d %d", &a, &b);

	printf("You entered %d and %d respectively, processing your request...............\n", a, b);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	switch(operator)
	{
		case '+':
			add = a + b;
			printf("Addition of numbers entered is %d.\n", add);
			break;

		case '-':
			sub = a - b;
			printf("Subtraction of numbers entered is %d.\n", sub);
			break;

		case '*':
			mul = a * b;
			printf("Multiplication of numbers entered is %d.\n", mul);
			break;

		case '/':
			div = a / b;
			printf("Division of numbers entered is %d.\n", div);
			break;

		case '%':
			modu = a % b;
			printf("After division of numbers entered, remainder is %d.\n", modu);
			break;

		default: 
			printf("Thanks for using mini-calculator.\n");
			
	}
	

	return (0);

	
}
