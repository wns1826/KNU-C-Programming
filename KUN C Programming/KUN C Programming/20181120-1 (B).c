#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int arr[3], chk[10] = { 0 };
	int i, r;
	for (i = 0; i < 3; i++) {
		while (1) {
			r = rand() % 10;
			if (chk[r] == 0)
				break;
		}
		chk[r] = 1;
		arr[i] = r;
	}

	for (i = 0; i < 3; i++)
		printf("%d ", arr[i]);
}