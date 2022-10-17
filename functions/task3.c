#include <stdio.h>
#include <stdarg.h>

int AddDouble(int x, ...);

int main()
{
	int d1, d2, d3, d4;
	
	d1 = 10;
	d2 = 34;
	d3 = 44;
	d4 = 40;

	printf("Given an argument: %d\n", d1);
      	printf("The result is: %d.\n", AddDouble(1, d1));
	printf("For the arguments: %d and  %d\n", d1, d2);
	printf("The result is: %d.\n", AddDouble(2, d1, d2));
	printf("For the arguments: %d, %d and %d.\n", d1, d2, d3);
	printf("The result is: %d.\n", AddDouble(3, d1, d2, d3));
	printf("for the arguments: %d, %d, %d and %d.\n", d1, d2, d3, d4);
	printf("The result is: %d\n", AddDouble(4, d1, d2, d3, d4));
	return 0;
}
/* Definition of AddDouble */
int AddDouble(int x, ...)
{
	va_list arglist;
	int i;
	int result = 1;

	printf("The number of arguments is: %d\n", x);
	va_start (arglist, x);
	for (i=0; i<x; i++)
		result *= va_arg(arglist, int);
	va_end (arglist);
	return result;
}
		
