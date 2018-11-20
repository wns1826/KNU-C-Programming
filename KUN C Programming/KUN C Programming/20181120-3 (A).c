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
	for (i = 0; i < 5; i++)
		arr[(n + i) % 10] = i + 1;

	while (1) {
		system("cls");
		for (i = 0; i < 10; i++)
			printf("%d ", arr[i]);
		printf("\n");

		int r = rand() % 2;
		if (r == 0) {
			for (i = 0; i < 5; i++)
				arr[(n + i) % 10] = 0;
			n--;
			if (n == -1)
				n = 9;
			for (i = 0; i < 5; i++)
				arr[(n + i) % 10] = i + 1;
		}
		else {
			for (i = 0; i < 5; i++)
				arr[(n + i) % 10] = 0;
			n++;
			if (n == 10)
				n = 0;
			for (i = 0; i < 5; i++)
				arr[(n + i) % 10] = i + 1;
		}
		Sleep(500);
	}
}