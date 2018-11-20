#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

int main() {
	srand(time(NULL));
	int arr[10] = { 0 }, i;
	for (i = 0; i < 10; i++)
		arr[i] = 0;
	int n = rand() % 10;
	arr[n] = 5;

	while (1) {
		system("cls");
		for (i = 0; i < 10; i++)	
			printf("%d ", arr[i]);
		printf("\n");

		int r = rand() % 2;
		if (r == 0) {
			arr[n] = 0;
			if (n == 0)
				n = 10;
			arr[--n] = 5;
		}
		else {
			arr[n] = 0;
			if (n == 9)
				n = -1;
			arr[++n] = 5;
		}
		Sleep(500);
	}
}