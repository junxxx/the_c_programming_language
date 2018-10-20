#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#if !defined(HDR)
#define HDR 1
#endif

#ifndef HDR
#define HDR 2
#endif
#define dprint(expr) printf(#expr " = %g\n", expr)

int main(int argc, char const *argv[])
{
    int bit = 0xf;
    int binary = 0b1000;
    int bitwise;
    char *s = "uldt";
    printf("%s len:%lu", s, strlen(s));
    dprint(bit/binary);
    printf("%d,%d, %d\n", CHAR_MIN, CHAR_MAX, CHAR_BIT);
    printf("%d, %d, %d, %d, %d\n", SHRT_MIN, SHRT_MAX, USHRT_MAX, LONG_BIT, WORD_BIT);
    printf("%d, %d\n", INT_MIN, INT_MAX);
    printf("%d, %d, %ld\n", UINT_MAX, UCHAR_MAX, ULONG_MAX);
    printf("%ld, %ld\n", LONG_MIN, LONG_MAX);
    printf("%x, %o, %x", bit, bit, bit & 0b0010);
    bitwise = bit & 0b0010;
    printf("%x, %x, %d\n", bitwise, 0b0010, 0b0010);
    printf("%d, %d, %d", binary, binary >> 1, binary >> 2);
    return 0;
}
