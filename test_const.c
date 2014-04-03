/*
 * =====================================================================================
 *
 *       Filename:  test_const.c
 *
 *    Description:  i
 *
 *        Version:  1.0
 *        Created:  2013年12月23日 14时30分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

const int i = 10;

int main(void)
{
	int *p = (int *)&i;
	printf("%s(), *1 p:%d\n", __func__, *p);
	*p = 20;
//	i = 30;
	printf("%s(), *2 p:%d\n", __func__, *p);
	return 0;
}
