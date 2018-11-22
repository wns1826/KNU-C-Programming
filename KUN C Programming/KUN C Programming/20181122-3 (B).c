#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int arr[10];
	int i, count = 0, start = 0, max = 0, max_i;

	for (i = 0; i < 10; i++)
		arr[i] = rand() % 5;

	for (i = 0; i < 10; i++) {
		if (arr[i] == arr[start])
			count++;
		else {
			if (max < count) {
				max = count;
				max_i = start;
			}
			count = 1;
			start = i;
		}
	}

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	if (max == 1) printf("연속된 숫자가 없습니다\n");
	printf("%d번째 부터 %d개가 %d입니다\n", max_i, max, arr[max_i]);
}