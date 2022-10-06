/*A program that updates the value of a variable using pointers*/
#include <stdio.h>

main()
{
	double flt_num, *ptr_flt_num;

	flt_num = 123.45;
	printf("flt_num: address:%p, content:%f\n", &flt_num, flt_num);
	ptr_flt_num = &flt_num;
		printf("ptr_flt_num: address:%p, content:%p\n", &ptr_flt_num, ptr_flt_num);
		printf("*ptr_flt_num => %f\n", *ptr_flt_num);
	*ptr_flt_num = 543.21;
		printf("ptr_flt_num: address:%p, content:%p\n", &ptr_flt_num, ptr_flt_num);
		printf("*ptr_flt_num => %f\n", *ptr_flt_num);
	return 0;
}
