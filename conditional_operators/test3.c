/*More exercises on conditional operators*/
#include <stdio.h>

main()
{
	int x, y;

	x = 0xFFF;
	y = 0X1000;
	printf("!x evaluates to: %d (i.e., %u)\n", !x, !x);
	printf("!y evaluates to: %d (i.e., %u)\n", !y, !y);       
	return 0;
}
