/*Using the if-else statement*/
#include <stdio.h>

main()
{
	int i;

	printf("Even Number 	Odd number\n");
	for (i=0; i<10; i++)
		if (i%2 == 0)
			printf("%d", i);
		else
			printf("%16d\n", i);
	return 0;
}
