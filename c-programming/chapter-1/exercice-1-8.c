#include <stdio.h>


int main()
{
    int s;
    int nc = 0;

    while ((s = getchar()) != EOF) {
        if (s == '\n' || s == '\t' || s == ' ') {
            nc++;
        }
    }
    printf("%d\n", nc);
}