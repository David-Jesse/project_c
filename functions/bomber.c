#include <stdio.h>

#define COUNT 20000000
void dropbomb(void);   
void delay(void);

int deaths;

int main()
{
	char x;

	deaths = 0;
	for(;;)
	{
		printf("Press ~ then Enter to quit\n");
		printf("Press Enter to drop the bomb:");
		x = getchar();
		fflush(stdin);
		if (x == '~')
		{
			break;
		}
		dropbomb();
		printf("%d people killed!\n", deaths);
	}
	return 0;
}
void dropbomb()
{
	int x;

	for(x=20; x>1; x--)
	{
		puts("	*");
		delay();
	}
	puts("	BOOM!");
	deaths+=1500;
}
void delay()
{
	long int x;

	for(x=0; x<COUNT; x++)
		;
}
