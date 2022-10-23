#include <stdio.h>
/*function declaration */
void StrPrint(char *str);
/*main function */
int main()
{
	char string[] = "I like C!";
	
	StrPrint(string);
	return 0;
}
/* function definition*/
void StrPrint(char *str)
{
	printf("%s\n", str);
}
