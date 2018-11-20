#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int arr[10], cnt[5] = { 0 };
	int i, max = 0, max_i;

	for (i = 0; i < 10; i++)
		arr[i] = rand() % 5;

	for (i = 0; i < 10; i++)
		cnt[arr[i]]++;

	for (i = 0; i < 5; i++) {
		if (max < cnt[i]) {
			max = cnt[i];
			max_i = i;
		}
	}

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n%d이 %d회로 가장 많이 나옴", max_i, max);
}