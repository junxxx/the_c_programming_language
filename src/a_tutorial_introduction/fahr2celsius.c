#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */
int main(int argc, const char** argv)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = upper;
    printf("=====Fahrenheit-Celsius Table=====\n");
    while (fahr >= lower) {
        celsius = (5.0/9.0) * (fahr-32.0); 
        printf("\t%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }

    return 0;
} 
