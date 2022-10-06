/*A program that initialize an integer variable and outputs results*/
#include <stdio.h>

main()
{
	int x;

	x = 1;
	printf("Given x = %d\n", x);
	printf("x++ produces:	%d\n", x++);
	printf("Now x contains: %d\n", x);
	printf("x = x++ produces: %d\n", x = x++);
	printf("Now x contains:	%d\n", x);
	return 0;
}
