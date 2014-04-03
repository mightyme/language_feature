#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct probe {
    //int id;
    //char name[100];
    struct probe *next;
    unsigned int range;
};

static struct probe dummy = {
    .next = NULL,
    .range = ~0,
};

static struct probe *head[1] = {&dummy};

void add(int range)
{
    struct probe *p = (struct probe *)malloc(sizeof(struct probe));
    memset(p, 0, sizeof(*p));
    p->range = range;
    printf("New item's address is %p, range is %d\n", p, p->range);

    struct probe **s = &head[0];
    printf("s is %p, *s is %p\n", s, *s);
    
    while (*s && (*s)->range < range) {
        printf("s is %p, *s is %p, (*s)->next is %p, &(*s)->next is %p\n",
                s, *s, (*s)->next, &(*s)->next);
        s = &(*s)->next;
        printf("whle() loop, after change, s is %p, *s is %p\n", s, *s);
    }

    p->next = *s;
    /*
    * Crucial Point!!!
    */
    *s = p;
    printf("after *s = p, s is %p, *s is %p\n", s, *s);
}

int main(int argc, char **argv)
{
    struct probe *cursor;
    int i;
    printf("dummy's address is %p, &dummy.next is %p, head's is%p\n", &dummy, &dummy.next, head);
    add(30);
    for (i = 0; i < 3; i++) {
        int j = i;
        printf("\n%d times, j's address is %p\n", i+1, &j);
        add(j);
    }
    printf("\n");
    add(30); 
    cursor = head[0];
    while (cursor) {
        printf("cusor is %p, cursor->range is %u\n", cursor, cursor->range);
        cursor = cursor->next;
    }

    return 0;
}
