/*Solution to the quiz questions*/
#include <stdio.h>

main()
{
	int x, y;

	x = 4;
	y = 2;
	switch ('-') {
	        case '+': 
		    x += y;
		case '-':
		    x -= y;
		case '*':
		    x *= y;
		case '/':
		    x /= y;
		default:
		    break;
	}
	printf("The final value of x is %d.\n", x);
	return 0;
}

