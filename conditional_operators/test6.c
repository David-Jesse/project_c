/*Working with the ?: operators */
#include <stdio.h>

main()
{
	int x;

	printf("Enter a character:\n(enter q to exit)\n");
	for (x = ' '; x != 'q' ? 1 : 0; ) {
		x = getc(stdin);
		putchar(x);
	}
	printf("\nBye Felicia, Its been real");
	return 0;
}
