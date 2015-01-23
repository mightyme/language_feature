#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int *p2 = 0xff;
	int **pp;
	printf("p2:0x%p, &p2:0x%p\n", p2, &p2);
	printf("pp:0x%p, &*pp:0x%p, *pp:0x%p, &pp:0x%p, sizeof(*pp):%d\n", pp, &*pp, *pp, &pp, sizeof(*pp));

	pp = malloc(sizeof(*pp));
	printf("pp:0x%p, *pp:0x%p, &pp:0x%p, sizeof(**pp):%d\n", pp, *pp, &pp, sizeof(**pp));
	p2 = malloc(sizeof(int));
	printf("p2:0x%p, &p2:0x%p, sizeof(int):%d\n", p2, &p2, sizeof(int));
	
	*pp = p2;
	printf("pp:0x%p, &*pp:0x%p, *pp:0x%p, &pp:0x%p\n", pp, &*pp, *pp, &pp);
	return 0;
}
