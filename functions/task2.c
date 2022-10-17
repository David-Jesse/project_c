#include <stdio.h>

int MultiTwo(int x, int y);

/* Main function */
int main()
{
	int x = 60;
	int y = 74;

	printf("MultiTwo has the following values: %d and %d. \n", x, y);
	printf("MultiTwo yields: %d.\n", MultiTwo(x, y));
	return 0;
}

/*MultiTwo defintion */
int MultiTwo(int x, int y)
{
	return (x *= y);
}

