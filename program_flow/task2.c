/*Working with nested if statements all still under flow control*/
#include <stdio.h>

main()
{
	int i;

	for (i=0; i<=100; i++){
		if (i > 0)
			if (i%6 == 0)
				printf("  %d.\n", i);
	}
	return 0;
}
			
