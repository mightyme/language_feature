#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ds{
	int ref;
	char name[0];
};

int main(int argc, char ** argv)
{
	struct ds * ds = NULL;
	char a0[0];
	char a1[1];
	char *as;
	char * name = "Qudao is a great man!";
	printf("sizeof a0, a1, as is: %d, %d, %d\n",
	      sizeof(a0), sizeof(a1), sizeof(as));
	printf("a0 is 0x%x\n", a0);
	a0[0] = malloc(sizeof(name) + 1);
	printf("a0, a0[0], &a0[0] is 0x%x, 0x%x, 0x%x\n", a0, a0[0], &a0[0]);
	//memset(a0[0], 0, sizeof(name) + 1);
	//strcpy(a0[0], name);
	printf("The string a0 points to is %s\n", a0);
	printf("sizeof(struct ds) is %d\n", sizeof(struct ds));
	ds = malloc(sizeof(struct ds) + strlen(name)+1);
	memset(ds, 0, sizeof(struct ds) + strlen(name)+1);
	if(ds){
		ds->ref = 2;
		strcpy(ds->name, name);
		printf("ds->name is %s\n", ds->name);
		return 0;
	}
	printf("malloc() fails\n");
	return -1;
}
