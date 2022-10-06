/*A program that keeps looping till you enter the character */
#include <stdio.h>

main()
{
	int a;

	a = ' ';
	printf("Enter a character:\n(enter k to exit)\n");
       	while (a != 'k') {
		a = getc(stdin);
		putchar(a);
	}
	printf("\nDone with this loop shit. Adious\n");
	return 0;
}	
