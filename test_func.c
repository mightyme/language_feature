/*
 * =====================================================================================
 *
 *       Filename:  test_func.c
 *
 *    Description:  i
 *
 *        Version:  1.0
 *        Created:  2013年12月19日 19时57分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>

int init_int(void)
{
	return 69;
}

//int i = init_int();
int i;
i = 10;
int main(void)
{
	printf("%s(), i: %d\n", __func__, i);
	return 0;
}
