#include <stdio.h>

typedef struct stuff stuff_t;
struct stuff {
	char name[10];
	unsigned int salary;
};

void creat_VIP_engineer(void);
stuff_t * get_VIP_engineer(void);
void free_stuff(stuff_t *stuff);


int main(int argv, char **argc)
{
	stuff_t *vip_engineer = NULL;
	creat_VIP_engineer();
	vip_engineer = get_VIP_engineer();
	printf("%s(), vip_engineer is %s, vip_engineer is %p\n", __func__, vip_engineer->name, vip_engineer);	
	
	free_stuff(vip_engineer);
	
	return 0;
	
}
