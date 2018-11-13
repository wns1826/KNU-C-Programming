#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
	srand(time(NULL));
	int arr[10] = { 0 }, n = rand() % 10;
	arr[n] = 1;
	
	while (1) {
		system("cls");
		for (int i = 0; i < 10; i++) {
			printf("%d ", arr[i]);
		}
		Sleep(500);
		arr[n++] = 0;
		if (n == 10)
			n = 0;
		arr[n] = 1;
	}
}