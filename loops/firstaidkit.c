/*Rewriting nested loops*/
#include <stdio.h>

main()
{
	int i, j;
	i = 1;
	j = 1;

	while (i <= 3) {  /* The outer loop*/
		i++;
		printf("The start of iteration %d of the outer loop.\n", i);
		do { 	
			printf("	Iteration %d of the inner loop.\n", j); 
		} while (j <= 4);
			j++;
		printf("The end of iteration %d of the outer loop.\n", i);
	}
	return 0;
}

