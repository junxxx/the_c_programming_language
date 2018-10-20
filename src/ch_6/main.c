#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
    struct point *next;
};

struct str {
    int len;
    char *str;
} *p;

int main(int argc, char const *argv[])
{
    /* code */
    struct point one = { 3, 4};
    struct rect screen = {{1,2}, {6,8}, &one};
    struct rect *pt;
    struct str st = { 8, "abc"};
    //one.x = 3;
    // one.y = 4;
    printf("size of point %lu:\n", sizeof(struct point));
    printf("x=%d\ty=%d\t%d\n", one.x, one.y, screen.pt1.x);
    printf("%d\n", screen.next->x);
    one.x = 12345;
    pt = &screen;
    printf("%d\n", screen.next->x++);
    printf("%p\n", p);
    *p++;
    printf("%p\n", p);
    p++;
    printf("%p\n", p);
    p = &st;
    printf("%p\n", *p->str++);
    // printf("%p\n", (*p->str)++);
    // printf("%p\n", *p->str);
    *p->str;
    *p->str++;
    (*p->str)++;
    *p++->str;
//    运算符的优先级
    return 0;
}
