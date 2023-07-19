#include <stdio.h>

/**
  * A switch calculator that does basic arithmetic of addition, 
  * subtraction, multiplication, division and modulo operator.
  *
  * return: always (0) if successful.
  */

int main()
{
	int a, b, add, sub, mul, div, mod;
	char operator;


	printf("Enter arithmetic operator to be used in this operation\n");
	scanf("%c", &operator);

	printf("Enter two numbers to be processed\n");
	scanf("%d %d", &a, &b);

	switch(operator)
	{
		case '+':
			add = a + b;
			printf("Addition of %d and %d = %d\n", a, b, add);
			

		case '-':
			sub = a - b;
			printf("Subtraction of %d and %d = %d\n", a, b, sub);
			

		case '*': 
			mul = a * b;
			printf("Multiplication of %d and %d = %d\n", a, b, mul);
			

		case '/':
			div = a / b;
			printf("Division of %d and %d = %d\n", a, b, div);


		case '%': 
			mod = a % b;
			printf("After division of %d and %d, remainder is %d\n", a, b, mod);
			break;

		default: 
			printf("Kindly check parameters, operation failed");
	}
	
}
