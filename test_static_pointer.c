#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stuff stuff_t;
struct stuff {
	char name[10];
	unsigned int salary;
};

static stuff_t *engineer;

stuff_t * alloc_stuff(void)
{
	stuff_t *stuff = NULL;
	stuff = malloc(sizeof(stuff_t));
	if (NULL != stuff) {
		memset(stuff, 0, sizeof(stuff_t));
		strcpy(stuff->name, "Qudao");
		printf("%s(), stuff->name is %s, stuff is %p\n", __func__, stuff->name, stuff);
	}  
	
	return stuff;
}

void free_stuff(stuff_t *stuff)
{
	free(stuff);
}

void creat_VIP_engineer(void) {
	if (NULL == engineer) {
		engineer = alloc_stuff();
		printf("%s(), engineer is %p\n", __func__, engineer);
	} else {
		printf("Warnning! VIP engineer is already created\n");
	}
}

stuff_t * get_VIP_engineer(void) {
	return engineer;
}
