#include <stdio.h>

int main(int argc, char ** argv)
{
	char const map[]="Qudao;"
					"Bighead"
					"Test1" "test2";
	char test[] = "qudao";
	printf("The content of map[] is %s, sizeof(map) is %d\n", map, sizeof(map));
	printf("The content of test[] is %s, sizeof(test) is %d\n", test, sizeof(test));
	return 0;
}
