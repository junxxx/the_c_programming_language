#include <stdio.h>

/*Celsius to Fahrenheit */

int main(int argc, char const *argv[])
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;
    printf("%6c\t%3c\n",'C', 'F');
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32;
        printf("%6.0f\t%3.1f\n",celsius, fahr);
        celsius += step;
    }
    return 0;
}
