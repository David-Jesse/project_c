/* a program that measures the sizes of short, long and long double*/
#include <stdio.h>

main()
{
	printf("The size of short int is %d.\n");
		sizeof(short int);
	printf("The size of long int is %d.\n");
		sizeof(long int);
	printf("The size of long double is %d.\n");
		sizeof(long double);
	return 0;
}
