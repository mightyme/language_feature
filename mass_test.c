
#include <stdio.h>
typedef char *String;
int main(void){
	printf("!!!!!!!\n");
	static int i = 6;
	printf("i = %d\n", i);
	
	int a = 66, b=0;
	int c = !b;
	printf("!a = %d\n", !a);
	printf("!!a = %d, !b and c is %d and %d\n", !!a, !b, c);
	
	char con[] = "quado";
	//const String p1;
//	const char *p1;
	String const p1;
//	String p1;
	p1 = con;
	printf("p1 points to %s\n", p1);
	return 0;
}

