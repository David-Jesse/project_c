/*Write a program to measure the total bytes taken by an array and print out all the elements of the array*/
#include <stdio.h>

main()
{
	int i;
	char list_ch[][2] = {
		'1', 'a',
		'2', 'b',
		'3', 'c',
		'4', 'd',
		'5', 'e',
		'6', 'f'};

	printf("The size of list_ch[][2] is %d bytes.\n", sizeof (list_ch));
	for (i=0; i<6; i++)
		printf("%c  %c\n", list_ch[i][0], list_ch[i][1]);

	return 0;
}

