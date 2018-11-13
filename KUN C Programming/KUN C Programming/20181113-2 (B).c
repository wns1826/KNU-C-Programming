#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int arr_1[10], arr_2[10];
	int i, t;
	for (i = 0; i < 10; i++) {
		arr_1[i] = rand() % 5;
		arr_2[i] = rand() % 5;

	}
	for (i = 0; i < 10; i++) {
		if (arr_1[i] != arr_2[i]) {
			t = arr_1[i];
			arr_1[i] = arr_2[i];
			arr_2[i] = t;
		}
	}
}