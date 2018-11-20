#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int arr[10], i;
	for (i = 0; i < 10; i++)
		arr[i] = i;

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	while (1) {
		char ch = _getch();
		if (ch == 32) {
			for (i = 0; i < 10; i++) {
				int r = rand() % 10;
				int t = arr[r];
				arr[r] = arr[i];
				arr[i] = t;
			}

			for (i = 0; i < 10; i++)
				printf("%d ", arr[i]);
			printf("\n");
		}
	}
}