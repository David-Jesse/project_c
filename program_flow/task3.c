/*Writing a program that reads characters and prints the numeric values*/
#include <stdio.h>

main()
{
	int letter;
	
	printf("Please enter a letter:\n");
	letter = getchar();
	switch (letter){
		case 'A':
			printf("The numeric value of A is %d.\n", 'A');
			break;
		case 'B':
			printf("The numeric value of B is %d.\n", 'B');
			break;
		case 'C':
			printf("The numeric value of C is %d.\n", 'C');
			break;
		default:
			break;
	}
	return 0;
}

