/*Using a while loop */
#include <stdio.h>

main()
{
	int j;

	j = ' ';
	printf("Enter a character:\n(enter x to exit)\n");
	while (j != 'x') {
		j = getc(stdin);
		putchar(j);
	}
	printf("\nOut of the while loop. Bye!\n");
	return 0;
}
