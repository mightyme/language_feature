/*
 * =====================================================================================
 *
 *       Filename:  test_copy_2_pointer.c
 *
 *    Description:  i
 *
 *        Version:  1.0
 *        Created:  2014年03月25日 21时18分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _stuff {
	unsigned long id;
	int salary;
	int from_campus;
	char name[20];
} stuff_t, *pstuff_t;

int main(void) 
{
	pstuff_t cur = NULL;
	pstuff_t qd = NULL;
	qd = malloc(sizeof(stuff_t));
	memset(qd, 0, sizeof(stuff_t));
	qd->id = 0x0102030405060708;
	qd->salary = 30000;
	qd->from_campus = 1;
	strncpy(qd->name, "qudao", sizeof(qd->name));
	printf("%s(), cur:%p, qd:%p\n, sizeof(cur):%ld\n",
		__func__, cur, qd, sizeof(cur));
	memcpy(&cur, &qd, sizeof(cur));
	printf("memcpy &qd, cur:%p(should be the same with qd:%p),cur->id:%lu\n",
		cur, qd, cur->id);
	memcpy(&cur, qd, sizeof(cur));
	printf("memcpy qd, cur:%p(should related to 0x%lx)\n",
		cur, qd->id);
	free(qd);
	return 0;
}
