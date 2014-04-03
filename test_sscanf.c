/*
 * =====================================================================================
 *
 *       Filename:  test_sscanf.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年09月05日 18时33分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#define TARGET_CONTENT "Qudao's salary is"
int main(void) 
{
	int ret;
	unsigned int salary = 200;
	char buf[] = " Qudao's salary is 3000";
	ret = sscanf(buf, TARGET_CONTENT"%u", &salary);
	if (1 == ret) {
		printf("%s(), salary is %d\n", __func__, salary);
	} else {
		printf("%s(), sscanf() err: %d\n", __func__, ret);
	}
	return 0;
}
