/*Working with hex values*/
#include <stdio.h>

main()
{
	int x, y;

	x = 0xEFFF;
	y = 0x1000;
	printf("Given x = %u\n", x, x);
	printf("	y = %u\n", y, y);
	printf("~x returns: %u\n", ~x, ~x);
	printf("~y returns: %u\n", ~y, ~y);
	return 0;
}
