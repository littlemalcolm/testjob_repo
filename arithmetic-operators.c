#include <stdio.h>

void main()
{
	int a = 21;
	int b = 10;
	int c;

	/* Addition */
	c = a + b;
	printf("When Added - Value of c is %d\n", c);


	/* Subraction */
	c = a - b;
	printf("When Subtracted - Value of c is %d\n", c);


	/* Multiplication */
	c = a * b;
	printf("When Multiplied - Value of c is %d\n", c);


	/* Division */
	c = a / b;
	printf("When Divided - Value of C is %d\n", c);


	/* Modulo Operator - Remainder after division */
	c = a % b;
	printf("After Modulo operation - Value of c is  %d\n", c);


	/* Increment Operator */
	c = a++;
	printf("After increment operation, Value of c is %d\n", c);


	/* Decrement Operator */
	c = a--;
	printf("After decrement operation, Value of c is %d\n", c);	
}
