#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a, i;
	char c;
	scanf("%d %c", &a, &c);

	if (c == 'a') {
		for (i = 1; i <= 9; i++)
			printf("%d * %d = %d\n", a, i, a * i);
	}
	else if (c == 'd') {
		for (i = 9; i >= 1; i--)
			printf("%d * %d = %d\n", a, i, a * i);
	}
}