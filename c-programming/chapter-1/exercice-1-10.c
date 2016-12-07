#include <stdio.h>


int main()
{
	int s;

	while ((s = getchar()) != EOF) {
		if (s == '\t' || s == '\b' || s == '\\') {
			putchar('\\');
			if (s == '\t') {
				putchar('t');
			}
			if (s == '\b') {
				putchar('b');
			}
			if (s == '\\') {
				putchar('\\');
			}
		} else {
			putchar(s);
		}
	}
}