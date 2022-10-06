/*Write a program that prints out the left and right values*/
#include <stdio.h>

main()
{
	int x, *ptr_x;
	int y, *ptr_y;
	int z, *ptr_z;

	x = 512;
	y = 1024;
	z = 2048;
	printf("x: address:%p, content:%d\n", &x, x);
	printf("y: address:%p, content:%d\n", &y, y);
	printf("z: address:%p, content:%d\n", &z, z);
	ptr_x = &x;
		printf("ptr_x: address:%p, content:%p\n", &ptr_x, ptr_x);
		printf("*ptr_x => %d\n", *ptr_x);
	ptr_y = &y;
		printf("ptr_y: address:%p, content:%p\n", &ptr_y, ptr_y);
		printf("*ptr_y => %d\n", *ptr_y);
	ptr_z = &z;
		printf("ptr_y: address:%p, content:%p\n", &ptr_z, ptr_z);
		printf("*ptr_z => %d\n", *ptr_z);
	return 0;
}

