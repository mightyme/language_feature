#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct my_struct {
	long id;
	unsigned long long data[];
};



int main(int argc, char *argv[])
{
	char *title = "Senior Manager";
	struct my_struct *qudao;
	int tot_size = sizeof(struct my_struct) + strlen(title) + 1;
	printf("sizeof(unsigned long long):%d, sizeof(long):%d, sizeof(my_struct):%d\n",
			sizeof(unsigned long long), sizeof(long),sizeof(struct my_struct));

	qudao = malloc(tot_size);
	
	printf("sizeof(*qudao):%d, tot_size:%d, strlen(title):%d\n", sizeof(*qudao), tot_size, strlen(title));
	return 0;
}
