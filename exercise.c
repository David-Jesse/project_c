/*A program that puts the characters b,y,e together on the screen*/
#include<stdio.h>

main()
{
	int ch1, ch2, ch3;
	printf("Give me a three letter word:\n");
	ch1 = getc( stdin );
	ch2 = getchar( );
	ch3 = getchar( );
	printf("All she told was: %c", ch1);
	printf("%c", ch2);
	printf("%c", ch3);
	return 0;
}

