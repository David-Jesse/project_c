#include <stdio.h>

void jerk(int repeat);

int main()
{
	printf("He calls me on the phine with nothing to say.\n");
	printf("Not once, or twice but three times a day.\n");
	jerk(1);
	printf("He insulted my wife, my cat, my mother.\n");
	printf("He irritates and grates, like no other!\n");
	jerk(2);
	printf("He chuckles it off, his belly a-heavin.\n");
	printf("But he won't  be laughing when i get even!\n");
	jerk(3);
	return 0;
}
/* The jerk() function repeats the refrain for the value of the repeat variable */

void jerk(int repeat)
{
	int i;

	for(i=0; i<repeat; i++)
		printf("Bill is a jerk\n");
}
