#include <stdio.h>

void drive_car(int *start_car, int *park_car)
{
	*start_car = *start_car + 20;
	*park_car = *park_car + 50;
}

int main()
{
	int successful_drive_test = 10;
	int failed_drive_test = 5;

	drive_car(&successful_drive_test, &failed_drive_test);

	printf("updated value is %d %d\n", successful_drive_test, failed_drive_test);

	return (0);


}
