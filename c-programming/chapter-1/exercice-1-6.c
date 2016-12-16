#include <stdio.h>


int main()
{
    int a;
    while (1) {
        a = getchar() != EOF;
        printf("%d\n", a);
    }
}