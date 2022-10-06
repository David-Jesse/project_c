/*Write a program that prints out the results of these expressions*/
#include <stdio.h>

main()
{
	int x, y;

	x = 1;
	y = 3;
	printf("Given x = %d, y = %d\n", x, y);
	printf("x += y produces: %d\n", x += y);
	printf("x += -y produces: %d\n", x += -y);
	printf("x -= -y produces: %d\n", x -= -y);
	printf("x *= y produces: %d\n", x *= y);
	printf("x *= -y produces: %d\n", x *= -y);
	return 0;
}
