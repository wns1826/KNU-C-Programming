#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int arr[5][5], i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			arr[i][j] = rand() % 10;
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

	int n, t;
	scanf("%d", &n);

	if (n == 0) {
		for (int i = 0; i < 5; i++) {
			t = arr[0][i];
			arr[0][i] = arr[4][i];
			arr[4][i] = t;

			t = arr[1][i];
			arr[1][i] = arr[3][i];
			arr[3][i] = t;
		}
	}
	else if (n == 1) {
		for (int i = 0; i < 5; i++) {
			t = arr[i][0];
			arr[i][0] = arr[i][4];
			arr[4][i] = t;

			t = arr[i][1];
			arr[i][1] = arr[i][3];
			arr[i][3] = t;
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}