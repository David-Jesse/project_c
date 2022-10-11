/* Copying strings */
#include <stdio.h>
#include <string.h>

main()
{
	char str1[] = "Copy a string.";
	char str2[15];
	char str3[15];
	int i;

	/* With strcpy() */
	strcpy(str2, str1);
	/* Without strcpy */
	for (i=0; str1[i]; i++)
		str3[i] = str1[i];
	str3[i] = '\0';
	/* Display str2 and str3 */
	printf("The content of str2 using strcpy: %s\n", str2);
	printf("The content of str3 without using strcpy: %s\n", str3);
	return 0;
}
