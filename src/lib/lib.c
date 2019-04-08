#include "lib.h"

int getLine(char s[], int limit)
{
    int i, c;
    for (i = 0; i < MAXLINE - 1 && (c=getchar()) != EOF && c != '\n'; i++) {
        s[i]  = c;
    }
    if  (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
 
char *alloc(int n)
{
    if (allocbuf + ALLOCSIZE - allocp >= n ){       /* it fits */
        allocp += n;
        return allocp - n; /* old p */
    } else 
        return 0;
}

/* swap: interchange v[i] and v[j] */
void swap(char *v[], int i, int j)
{
    char *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

/* qsort: sort v[left] ... v[right] into increasing order */
void qsort(char *v[], int left, int right)
{
    int i, last;
    void swap(char *v[], int i, int j);

    if (left >= right)
        return;
    swap(v, left, (left + right)/2);
    last = left;
    for (i = left+1; i <= right; i++) 
        if (strcmp(v[i], v[left]) < 0)
            swap(v, ++last, i);
    swap(v, left, last);
    qsort(v, left, last-1);
    qsort(v, last+1, right);
}

int readlines(char *lineptr[], int maxlines)
{
    int len, nlines;
    char *p, line[MAXLINE];

    nlines = 0;
    while ((len = getLine(line, MAXLINE))){
        if (nlines >= maxlines || (p = alloc(len)) == NULL){
            return -1;
        } else {
            line[len-1] = '\0';     /* delete newline */
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }
    return nlines;
}

/* writelines: write output lines */
void writelines(char *lineptr[], int nlines)
{
    int i;

    for (i = 0; i < nlines; i++){
        printf("%s\n", lineptr[i]);
    }
}

