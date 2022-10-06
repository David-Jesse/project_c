/*Answering quiz questions on conditional operators*/
#include <stdio.h>

main()
{
	int x, y, z;

	x = 96;
	y = 1;
	z = 69;
	printf("The following expression when evaluated yiedls: %d\n",
		!y ? x == z : y);
	return 0;
}
