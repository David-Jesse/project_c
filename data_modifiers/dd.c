/*Using %hd, %ld, and %lu specifiers*/
#include <stdio.h>

main()
{
	short int	x;
	unsigned int	y;
	long	int	s;
	unsigned int	t;

	x = 0xFFFF;
	y = 0xFFFFU;
	s = 0xFFFFFFFFl;
	t = 0xFFFFFFFFL;
	printf("The short int of 0xFFFF is %hd.\n", x);
	printf("The unsigned int of 0xFFFF is %u.\n", y);
	printf("The long int of 0xFFFFFFFFl is %ld.\n", s);
	printf("The unsigned long int of 0xFFFFFFFF is %lu.\n", t);
	return 0;
}
