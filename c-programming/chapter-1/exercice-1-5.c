#include <stdio.h>

int main()
{
	int fahr;
	for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
		printf("%3d %6.1f\n", fahr, (5./9.)*(fahr-32));
	}
}