/* a program that uses getchar() to read character entered by user*/
#include <stdio.h>

main()
{
	int ch;

	ch = 44;
	printf("The character that has a numeric value of 44 is: \n");
	putc(ch, stdout);
	return 0;
}
