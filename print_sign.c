#include <stdio.h>
int main(int argc, char ** argv)
{
    int val = 249;
    //pr_info("%s(), big error found, err: %d\n", __func__, (char)val);
    printf("(char)val is %d\n", (char)val);
    printf("val is %d\n",val);
    return 0;
}
