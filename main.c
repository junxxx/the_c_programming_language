#include <stdio.h>      /*include standard library*/

#define LOWER 0     /* lower limit of table */
#define UPPSER 300     /* upper limit */
#define STEP 20     /* step size */

int main(int argc, char const *argv[])      /*define a funciton called main */
{
    int c;
    float fahr;

    /*printf the table head*/
    printf("%3c\t%6c\n",'F', 'C');
    /*print the table reverse order*/
    for(fahr = UPPSER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32));

    return 0;
}
