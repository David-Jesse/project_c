/*A program that prints out hex values*/
#include <stdio.h>

main()
{
	printf("0xFFF ^ 0X8888 yields: 0X%X\n",
		0xFFF ^ 0X8888);
	printf("0xABCD & 0X4567 yields: 0X%X\n",
			0xABCD & 0X4567);
	printf("0xDCBA ! 0x1234 yields: 0X%X\n", 0xDCBA | 0x1234);
	return 0;
}
