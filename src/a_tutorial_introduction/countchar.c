#include <stdio.h>

/* count characters in input */
int main(int argc, const char** argv)
{
    int c;
    long blank, tab, nl;
    blank = tab = nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') 
            ++blank;
        if (c == '\t')
            ++tab;
        if (c == '\n')
            ++nl;
    }
    printf("blanks = %d\t tabs = %d\t nl = %d\n", blank, tab, nl);
    return 0;
} 
