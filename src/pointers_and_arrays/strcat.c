#include <stdio.h>
#include "../lib/lib.h"

void mystrcat(char *s, char *t);

int main(int argc, const char** argv)
{
    char s1[MAXLINE];
    char t[MAXLINE];
    while (getLine(s1, MAXLINE) > 0 && getLine(t, MAXLINE) > 0){
        mystrcat(s1, t);
        printf("%s\n", s1);
    }

    return 0;
}

/* mystrxat: copy string t to the end of string s */
void mystrcat(char *s, char *t)
{
    char *p = s, *q = t;
    while (*p){
        p++;
    }
    while (*p++ = *q++){
        ;
    }
    *p = '\0';
}
