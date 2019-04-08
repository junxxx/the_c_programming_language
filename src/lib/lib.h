#ifndef LIB_H
#define LIB_H
#define MAXLINE 1000
#define MAXLINES 5000           /* max #lines to be sorted */
#define ALLOCSIZE 10000         /* size of available space */

#include <stdio.h>
#include <string.h>

extern int getLine(char s[], int limit);

static char allocbuf[ALLOCSIZE]; /* storage for alloc */
static char *allocp = allocbuf; /* next free position */
char *alloc(int);

char *lineptr[MAXLINES]; /* pointers to text lines */

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);


#endif 
