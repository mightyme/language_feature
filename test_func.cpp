/*
 * =====================================================================================
 *
 *       Filename:  test_func.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年12月19日 19时51分50秒
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
static int ini_inter(void)
{
	return 6;
}

int i = ini_inter();

int main(void)
{
	cout << i << endl;
	return 0;
}
