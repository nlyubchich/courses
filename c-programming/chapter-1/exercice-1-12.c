#include <stdio.h>


int main()
{
    int s;

    while ((s = getchar()) != EOF) {
        if (s == ' ' || s == '\t') {
            putchar('\n');
        } else {
            putchar(s);
        }
    }
}