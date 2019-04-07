#include <stdio.h>
#include <string.h>
#define MAXLINE  1000

int getLine(char s[], int limit);
int strrindex(char s[], int t);

int main(int argc, const char** argv)
{
    char s[MAXLINE];
    int c;

    while (getLine(s, MAXLINE) > 0){
        c = getchar();
        printf("%d\n", strrindex(s, c));
    }
    
    return 0;
}

int getLine(char s[], int limit)
{
    int i, c;
    for (i = 0; i < MAXLINE - 1 && (c=getchar()) != EOF && c != '\n'; i++) {
        s[i]  = c;
    }
    if  (c == '\n'){
        s[i] = '\0';
    }
    return i;
}

/**
 * strrindex: return the position of the rightmost occurrence of t in s, -1 if there is none
 */
int strrindex(char s[], int t)
{
    int index = -1;
    for (int i = 0; i < strlen(s) - 1; i++){
        if (s[i] == t){
            index = i;
        }
    }
    return index;
}
