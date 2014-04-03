/*
 * =====================================================================================
 *
 *       Filename:  pointer_array.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年09月24日 17时09分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
int main()
{
   char a[5]={'A','B','C','D'};
   char (*p1)[5] = &a;
   char (*p2)[5] = a;
   int b[3][6];
   int **pb = b;
   int *ram;
   int (*p3)[6] = &b[0];
   int (*p4)[6] = b;
   int (*p5)[6] = &b;

   printf("sizeof(b):%d, sizeof(b[0]):%d, sizeof(b)/sizeof(b[0]): %d\n", sizeof(b), sizeof(b[0]), sizeof(b)/sizeof(b[0]));
   printf("%s(), b+2: %p, &b[2][0]: %p, &pb[2][0]: %p, &p3[2][0]: %p, &p5[2][0]: %p\n",
		   __func__, b+2, &b[2][0], &pb[2][0], &p3[2][0], &p5[2][0]);
   printf("pb: %p, pb+1: %p; b:%p, b+1:%p, ram: %p, ram+1: %p\n", pb, pb+1, b, b+1, ram, ram+1);
   printf("pb: %p, pb+2: %p,pb[1]: %p,*(pb+1):%p ,pb[2]:%p,  pb[1]+1: %p, &pb[1][1]:%p \n",
		   pb, pb+2, pb[1], *(pb+1),  pb[2], pb[1]+1, &pb[1][1]);
   return 0;
}
