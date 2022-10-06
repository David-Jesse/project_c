/*A program that updates the value of char variable using a pointer*/
#include <stdio.h>

main()
{
	char ch; 
	char *ptr_ch;

	ch = 'A';
	printf("The right value of ch is: %c\n", ch);
	ptr_ch = &ch;
	*ptr_ch = 'B';
	printf("The left value of ch is: 0x%p\n", &ch);
	printf("The left value of ch is: 0x%p\n", ptr_ch);
	printf("The right value of ch is: %c\n", ch);
	return 0;
}
