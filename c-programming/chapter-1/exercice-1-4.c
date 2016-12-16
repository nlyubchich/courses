#include <stdio.h>

int main()
{
    float celsium, fahr;
    int lower, upper, step;
    lower = -100;
    upper = 200;
    step = 20;

    celsium = lower;
    while (celsium <= upper) {
        fahr = (5./9.) * celsium+32.;
        printf("%3.0f %6.1f\n", celsium, fahr);
        celsium = celsium + step;
    }
}