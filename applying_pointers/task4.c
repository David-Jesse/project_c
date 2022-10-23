/* Using an array of pointers */
#include <stdio.h>
/* Function declarations */
void StrPrint1(char **str1, int size);
void StrPrint2(char *str2);

/* Main function */
int main()
{
	char *str[7] = {"Sunday", "Monday", "Tuesday", "Wednesday",
			"Thursday", "Friday", "Saturday"};
	int i, size = 7;

	StrPrint1(str, size);
	for (i=0; i<size; i++)
		StrPrint2(str[i]);

	return 0;
}
/* function definition */
void StrPrint1(char **str1, int size)
{	int i;
	/*Print all strings in an array of pointers to strings */
	for (i=0; i<size; i++)
		printf("%s\n", str1[i]);
}
void StrPrint2(char *str2)
{
	printf("%s\n", str2);
}

