/* Display two numbers and align them to the left edge of the field*/
#include <stdio.h>

main()
{
	int num1, num2;

	num1 = 123;
	num2 = 123.456;
	printf("%8d  %-8d\n", num1, num1);
	printf("%8f  %-8f\n", num2, num2);
	return 0;
}
