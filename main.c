#include <stdio.h>      /*include standard library*/

int main(int argc, char const *argv[])      /*define a funciton called main */
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    /*printf the table head*/
    printf("%3c\t%6c\n",'F', 'C');
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
    /*print the table reverse order*/
    for(fahr = 300; fahr >= 0; fahr = fahr - step)
        printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    return 0;
}
