#include <stdio.h>

#if 1
enum WEEK_VER1 {
	MON = 1,
	TUE,
};
#endif

#if 1
enum WEEK_VER2 {
	MON,
	TUE,
};
#endif

int main(int argc, char **argv)
{
	printf("%s(), MON is %d\n", __func__, MON);
	return 0;
}
