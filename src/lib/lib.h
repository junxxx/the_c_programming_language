#ifndef LIB_H
#define LIB_H
#define MAXLINE 1000
extern int getLine(char s[], int limit);
#endif 

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
 
