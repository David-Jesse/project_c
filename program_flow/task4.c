/*Write a program that keeps reading characters until q is entered*/
#include <stdio.h>

main()
{
	int c;

	printf("Please enter a letter:\n(enter q to exit)\n");
	while ((c = getc(stdin)) != 'q') {
		/*Nothing to see here */
	}
	printf("Its been real, Adious!");
	return 0;
}
