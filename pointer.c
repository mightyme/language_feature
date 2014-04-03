#include <stdio.h>
struct my {
    int mem_num;
    struct my *member[0];
};
struct you {
    int mem_num;
    struct you *member;
};

struct he{
    int mem_num;
    struct he *member[];
};
int main(int argc, char ** argv)
{
    char *a = malloc(2*sizeof(char));
    a[0] = 'q';
    a[1] = 'd';
    printf("%c, %c\n", a[0], a[1]);
    free(a);
    printf("%c, %c\n", a[0], a[1]);
//    free(a);
        
	printf("sizeof char, short, int, long and long long is: %d %d %d %d and %d\n",
            sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long));
    printf("sizeof(struct my) is %d, sizeof(struct you) is %d, sizeof(struct he): %d\n",
            sizeof(struct my), sizeof(struct you), sizeof(struct he));
    struct my *my = malloc(sizeof(struct my));
    my->mem_num = 2;
#if 1
    //my->member = malloc(my->mem_num * sizeof(struct my));//error!
    my->member[0] = malloc(my->mem_num * sizeof(struct my));//error!
    //my->member[1] = malloc(my->mem_num * sizeof(struct my));//error!
    my->member[0][0].mem_num = 4;
    my->member[0][1].mem_num = 5;
    printf("%d, %d, %d\n", my->mem_num, my->member[0][0].mem_num, my->member[0][1].mem_num);
    free(my);
//    free(my);
    free(my->member[0]);
    free(my);
    my->mem_num = 6;
    printf("%d, %d, %d\n", my->mem_num, my->member[0][0].mem_num, my->member[0][1].mem_num);
#endif
    struct he *he = malloc(sizeof(struct he) + 3*(sizeof(struct he *)));
    struct he he_1;
    he_1.mem_num = 99;
    he->member[2] = &he_1;
    printf("%d\n", he->member[2]->mem_num);
	return 0;
}
