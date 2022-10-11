/* Write a program to copy the string from str1 to another array */
#include <stdio.h>
#include <string.h>

main()
{
	char str1[] = "This is Exercise 1.";
	char str2[18];
	int i;

	strcpy(str2, str1);
	printf(" %s\n", str2);
	return 0;
}
