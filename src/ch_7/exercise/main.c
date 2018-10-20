#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define LOWER "lower"
#define UPPER "upper"

/*
 * description: converts upper case to lower or lower case to upper, 
 *              depending on the name it is invoked with
 * author: hprjunxxx@gmail.com
 * version: v1.0
 * date: 2018-10-20
 *
 */
int main (int argc, char *argv[])
{
    int c;
    if (argc < 2)
    {
        printf("useage: ./a.out lower(or upper)\n");
        exit(0);
    }
    if (strcmp(argv[1], LOWER) == 0)
    {
        while ((c = getchar()) != EOF)
            putchar(tolower(c));
    }
    else if (strcmp(argv[1], UPPER) == 0)
    {
        while ((c = getchar()) != EOF)
            putchar(toupper(c));
    }
    else
        printf("useage: ./a.out lower(or upper)\n");

    return 0;
}
