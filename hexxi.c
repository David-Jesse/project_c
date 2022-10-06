/*Write a program that prints integers in hex format */
#include <stdio.h>

main()
{
	printf("Hex(uppercase)	Hex(lowercase)	Decimal\n");
	printf("%X		%x		%d\n", 15, 15, 15);
	printf("%X		%x		%d\n", 150, 150, 150);
	printf("%X		%x		%d\n", 1500, 1500, 1500);
	return 0;
}
