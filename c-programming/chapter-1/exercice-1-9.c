#include <stdio.h>


int main()
{
	int s;
	int isSpaced = 0;

	while ((s = getchar()) != EOF) {
		if (s == ' ') {
			if (isSpaced) {
				continue;
			} else {
				isSpaced = 1;
			}
		} else {
			if (isSpaced) {
				isSpaced = 0;
			}
		}
		putchar(s);
	}
}