#include <stdio.h>


int main()
{
	int c;
	while (1) {
		c = getchar();
		if (c == EOF) {
			printf("Gotcha!\n");
			putchar(c);
		} else {
			printf("Try harder!\n");
		}
	}
}