#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
	srand(time(NULL));
	int arr[10] = { 0 };
	int n1, n2, i, r;

	n1 = rand() % 10;
	n2 = rand() % 10;

	arr[n1] = 1;
	arr[n2] = 2;

	while (1) {
		system("cls");
		for (i = 0; i < 10; i++)
			printf("%d ", arr[i]);
		Sleep(500);

		arr[n1] = 0;
		arr[n2] = 0;

		r = rand() % 2;
		if (r == 0) {
			if (n1 == 0)
				n1 = 10;
			if (n1 - 1 != n2)
				n1--;
		}
		else {
			if (n1 + 1 != n2)
				n1++;
		}

		r = rand() % 2;
		if (r == 0) {
			if (n2 == 0)
				n2 = 10;
			if (n2 - 1 != n1)
				n2--;
		}
		else {
			if (n2 + 1 != n1)
				n2++;
		}

		n1 %= 10;
		n2 %= 10;
		arr[n1] = 1;
		arr[n2] = 2;
	}
}