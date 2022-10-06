/*Breaking an infinite loop*/
#include <stdio.h>

main()
{
	int c;

	printf("Enter a character:\n(enter x to exit)\n");
	while	{
		c = getc(stdin);
		if (c == 'x')
			break;
	}
	printf("Break the finite while loop. Bye!\n");
	return 0;
}
