#include <stdio.h>
#include <limits.h>

int main(int argc, const char** argv)
{
    printf("schar_min is %d\t schar_max is %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("uchar_max is %d\n", UCHAR_MAX);
    printf("short_min is %d\t short_max is %d\n", SHRT_MIN, SHRT_MAX);
    printf("ushrt_max is %d\n", USHRT_MAX);
    printf("int_min is %d\t int_max is %d\n", INT_MIN, INT_MAX);
    printf("uint_max is %lu\n", UINT_MAX);
    printf("long_min is %ld\t long_max is %d\n", LONG_MIN, LONG_MAX);
    printf("ulong_max is %lu\n", ULONG_MAX);

    return 0;
}
