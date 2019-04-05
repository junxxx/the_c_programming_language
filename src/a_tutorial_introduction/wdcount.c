#include <stdio.h>
#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */

/* print input one word per line first version */
int main(int argc, const char** argv)
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
        if (state == IN) 
            putchar(c);
        else 
            putchar('\n');

    }
    printf("%d %d %d\n", nl, nw, nc);
    return 0;
} 
