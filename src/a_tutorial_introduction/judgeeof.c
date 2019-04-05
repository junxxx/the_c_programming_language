#include <stdio.h>

int main(int argc, const char** argv)
{
    printf("%d\n", getchar() != EOF);
    printf("the value of EOF is %d\n", EOF);
    return 0;
} 
