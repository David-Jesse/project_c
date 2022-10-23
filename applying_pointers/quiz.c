#include <stdio.h>

int main()
{
	char *ptr_ch;
	int *ptr_int;
	float *ptr_flt;
	
	printf("size of char: %d-bytes\n", sizeof(char));
	printf("bytes added to ptr_ch + 4: %d-bytes\n", sizeof(ptr_ch + 4));
	printf("bytes added to ptr_ch + 12: %d-bytes\n", (ptr_ch + 12));
	printf("size of int: %d-bytes\n", sizeof(int));
	printf("bytes added to ptr_int + 2: %d-bytes\n", sizeof(ptr_int + 2));
	printf("bytes added to ptr_int + 6: %d\n", sizeof(ptr_int + 6));	printf("size of float: %d-bytes\n", sizeof(float));
	printf("bytes added to ptr_flt + 3: %d\n", sizeof(ptr_flt + 3));

	return 0;
}	
