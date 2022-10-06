#include <stdio.h>

main()
{
	int x, *ptr_x;

	x = 10;
	printf("x: address:%p, content:%d\n", &x, x);
	ptr_x = &x;
		printf("ptr_x: address:%p, content:%p\n", &ptr_x, ptr_x);
		printf("*ptr_x => %d\n", *ptr_x);
	return 0;
}
