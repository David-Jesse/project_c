/*Initializing characters using the for loop*/
#include <stdio.h>

main()
{
	int i;
	char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};

	for (i=0; i<5; i++)
		array_ch[i] = 'a' + i;
	for (i=0; i<5; i++)
		printf("%c\n", array_ch[i]);
	return 0;
}
