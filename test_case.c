#include <stdio.h>

int main(int artc, char **argv)
{
	printf("begin switch()\n ");
	switch(0x1) {
	case 1<<0:
		printf("bit 0\n");
		break;
	case 1<<1:
		printf("bit 1\n");
		break;
	case 1<<2:
		printf("bit 2\n");
		break;
	case 1<<3:
		printf("bit 3\n");
		break;
	}

	return 0;
}
