/*Processing variable arguments */
#include <stdio.h>
#include <stdarg.h>

double AddDouble(int x, ...);

int main()
{
	double d1 = 1.5;
	double d2 = 2.5;
	double d3 = 3.5;
	double d4 = 4.5;

	printf("Given an argument: %2.1f\n", d1);
	printf("The result returned by AddDouble() is: %2.1f\n\n",
			AddDouble(1, d1));
	printf("Given arguments: %2.1f and %2.1f\n", d1, d2);
	printf("The result returned by AddDouble() is: %2.1f\n\n",
			AddDouble(2, d1, d2));
	printf("Given arguments: %2.1f, %2.1f and %2.1f\n", d1, d2, d3);
	printf("The result returned by AddDouble() is: %2.1f\n\n",
			AddDouble(3, d1, d2, d3));
	printf("Given arguments: %2.1f, %2.1f, %2.1f and %2.1f\n", d1, d2, d3, d4);
	printf("The result returned by AddDouble() is: %2.1f\n\n",
			AddDouble(4, d1, d2, d3, d4));
	return 0;
}
/* Definition of AddDouble() */
double AddDouble(int x, ...)
{
	va_list arglist;
	int i;
	double argument, total = 0.0;

	printf("These are the arguments passed: %d\n", x);
	va_start (arglist, x);
	for (i=0; i<x; i++){
		total = va_arg(arglist, double);
		printf("Argument passed to this function: %f\n", argument);
		total += argument;
}
	va_end (arglist);

	return total;
}
