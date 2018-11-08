#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int arr[10], i;
	for (i = 0; i < 10; i++)
		arr[i] = rand() % 20;

	int s = 0, max = 0, min = 19, max_i, min_i;
	for (i = 0; i < 10; i++) {
		s += arr[i];

		if (max < arr[i]) {
			max = arr[i];
			max_i = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			min_i = i;
		}
	}
	printf("평균: %d\n", s / 10);
	printf("최대: %d (%d)\n", max, max_i);
	printf("최소: %d (%d)\n", min, min_i);
}