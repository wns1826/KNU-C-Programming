#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int arr[10], i;
	for (i = 0; i < 10; i++)
		arr[i] = rand() % 20;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	for (i = 0; i < 5; i++) 
		printf("%d ", arr[i] + arr[9 - i]);
}