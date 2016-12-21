#include <stdio.h>

float fahrenheit_to_celsium(int fahr) {
    return (5./9.) * (fahr-32.);
}

int main()
{
    float fahr, celsium;
    int lower, upper, step;
    lower = 0;
    upper = 2000;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsium = fahrenheit_to_celsium(fahr);
        printf("%3.0f %6.1f\n", fahr, celsium);
        fahr = fahr + step;
    }
}