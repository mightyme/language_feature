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

typedef struct _stuff {
	int id;
	int salary;
	bool from_campus;
	char name[20];
} stuff_t, *pstuff_t;

int main(void) 
{
	pstuff_t cur;
	pstuff_t qd;
	qd = malloc(sizeof(stuff_t));
	qd->id = 500293;
	qd->salary = 30000;
	qd->from_campus = true;
	strncpy(qd->name, "qudao", sizeof(qd->name));
	printk("%s(), cur:%p, qd:%p\n, sizeof(cur)::", __func__, cur, qd);
	memcpy(cur, &qd, sizeof(stuff_t));

}
