#include <stdio.h>

int main()
{
	double ptr_db;

	ptr_db = 0x0238;

	printf("The address of ptr_db - 1 is: %p\n", &ptr_db - 1);
	printf("The address of ptr_db + 5 is: %p\n", &ptr_db + 5);
	
	return 0;
}
