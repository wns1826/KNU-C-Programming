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

	int n, s = 0;
	scanf("%d", &n);
	printf("index: ");
	for (i = 0; i < 10; i++) {
		if (arr[i] == n) {
			printf("%d ", i);
			s++;
		}
	}
	printf("(총 %d개)\n", s);
}