/*Use the two equivalent ways to measure the total memory space*/
#include <stdio.h>

main()
{
	int total_memory;
	double list_data[6] = {
		1.12345,
		2.12345,
		3.12345,
		4.12345,
		5.12345};
	total_memory = sizeof(double) * 6;
	printf("Method I: The size is %d.\n");

	total_memory = sizeof(list_data);
	printf("Method II: The size is %d.\n");

	return 0;
}
