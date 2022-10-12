/* Program scope vs block scope */
#include <stdio.h>

int x = 1234;	/* Program scope */
double y = 1.234567;	/* program scope */

void function_1()
{
	printf("From fucntion_1: \n  x=%d, y=%f\n", x, y);
}

main()
{
	int x = 4321;	/* block scope 1 */

	function_1();
	printf("Within the main block: \n  x=%d, y=%f\n", x, y);
	/* A nested block */
	{
		double y = 7.654321;	/* block scope 2 */
		function_1();
		printf("Within the nested block:\n  x=%d, y=%f\n", x, y);
	}
	return 0;
}
