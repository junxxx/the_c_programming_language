#include <stdio.h>

/**
 * My own version
 */
int main(int argc, const char** argv)
{
    //C = (5/9)*(F -32)
    int begin = 0, end = 300, step = 20;
    int f = begin;
    int c;
    while(f <= end) {
        c = (f - 32) * 5 / 9;
        printf("%d\t%d\n", f, c);
        f += step;
    }

    return 0;
} 
