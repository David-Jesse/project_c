/*Outputting a character with putc()*/
#include <stdio.h>
main()
{
	int ch;

	ch = 65; /*the numeric value of A */
	printf("The character that has a numeric value of 65 is:\n");
	putc(ch, stdout);
	return 0;
}
