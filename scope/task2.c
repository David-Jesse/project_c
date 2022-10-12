#include <stdio.h>

int x = 1234;
float y = 1.234567f;

void function_1(int x, double y)
{
	printf("from function_1:\n x=%d, y=%f\n", x, y);
}
main()
{
	int x = 4321;

	function_1(x, y);
	printf("Within the main block:\n  x=%d, y=%f\n", x, y);
	/* A nested block */
	{
		float y = 7.654321f;
		function_1(x, y);
		printf("Within the nested block:\n  x=%d, y=%f\n", x, y);
	}
	return 0;
}
