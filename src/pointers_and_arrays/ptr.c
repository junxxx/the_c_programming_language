#include <stdio.h>

int main(int argc, const char** argv)
{
    int a[] = { 0, 1, 2 ,3, 4, 5,6, 7, 8, 9 ,121 ,1211};
    int *p = a;
    printf("sizeof int %d\n", sizeof(int));
    printf("sizeof char %d\n", sizeof(char));
    printf("sizeof long %d\n", sizeof(long));
    printf("sizeof float %d\n", sizeof(float));
    printf("sizeof double %d\n", sizeof(double));
    printf("sizeof array a %d\n", sizeof(a));
    printf("array a has %d elements\n", (int)(sizeof(a) / sizeof(int)));
    printf("%d\n", *p);
    printf("%d\n", ++*p);
    printf("%d\n", *++p);
    printf("%d\n", *p++);
    printf("%d\n", (*p)++);
    printf("%d\n", *p);
    for (int i = 0; i < 10; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}
