/*Another quiz question on controlling program flow*/
#include <stdio.h>

main()
{
	int x, y;

	x = 4;
	y = 2;
	switch ('-') {
		case '+':
			x += y;
			break;
		case '-':
			x -= y;
			break;
		case '*':
			x *= y;
			break;
		case '/':
			x /= y;
			break;
		deafult:
			break;
	}
	printf("The final value of x is %d.\n", x);
	return 0;
}
