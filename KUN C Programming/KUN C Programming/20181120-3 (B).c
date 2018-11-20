#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int arr[10];
	int i, r = rand() % 10;

	for (i = 0; i < 10; i++)
		arr[(r + i) % 10] = i;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}