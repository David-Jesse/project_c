/*Put a string of characters on the screen*/
#include <stdio.h>

main()
{
	int i;
	char array_ch[7] = {'I', ' ',
				'l', 'i', 
				'k', 'e',
			  	'C', '!', '\0'};

	/*array_ch[i] in logical test */
	for (i=0; array_ch[i]; i++)
		printf("%c", array_ch[i]);

	printf("\n");
	return 0;
}
