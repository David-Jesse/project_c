/* Outputting a character with put() */
#include <stdio.h>

main()
{
	int ch;

	ch = 65; /* Numreic value of A */
	printf("The character that has numeric value of 65 is:\n");
	putc(ch, stdout);
	return 0;
}
