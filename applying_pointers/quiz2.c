#include <stdio.h>

int main()
{
	int *ptr_int1, *ptr_int2;

	ptr_int1 = 0x100A;
	ptr_int2 = 0x1006;
	printf("Substracting ptr_int1 - ptr_int2: %p\n", ptr_int1 - ptr_int2);

	return 0;
}

