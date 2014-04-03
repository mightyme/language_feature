/*
 * =====================================================================================
 *
 *       Filename:  test_const.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年12月23日 14时43分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;

const int i = 33;

int main(void)
{
	int *p = (int *)&i;
	cout << "*p: "<< *p << endl;
	*p = 66;
	cout << "*p: "<< *p << endl;
	return 0;
}
