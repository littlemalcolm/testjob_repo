#include <stdio.h>

int main()
{
	int x = 4;
	int y = 35;

	printf("value of x is %d\n", x);
	printf("value of y is %d\n", y);


	printf("memory location of x is %p\n", &x);
	printf("memory location of y is %p\n", &y);
	

	

	int *address_of_x = &x;
	int *address_of_y = &y;


	*address_of_x = 99;	// Value of x updated from 4 to 99 //
	*address_of_y = 40;     // Value of y updated from 35 to 40 //

	printf("Value of x is now %d\n", *address_of_x);
	printf("Value of y is now %d\n", *address_of_y);
}
