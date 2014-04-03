#define _GNU_SOURCE
#include <stdio.h>

void func(void){
	static char * ch = NULL;
	static int count = 0;
	count++;
	printf("&ch is %p, ch is %p, its content is %s\n", &ch, ch, ch);
	asprintf(&ch, "Test asprintf() times\n");
	printf("ch is %p, its content is %s\n", ch, ch);
}

int main(int argc, char ** argv){
	int i;
	for(i=0; i<5; i++){
		func();
	}
	return 0;
}
