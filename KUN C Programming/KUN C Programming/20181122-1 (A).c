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
		if (n1 == n2) printf("(°ãÄ§)");
		Sleep(500);

		arr[n1] = 0;
		arr[n2] = 0;

		r = rand() % 2;
		if (r == 0) n1--;
		else n1++;
		if (n1 == -1) n1 = 9;
		else if (n1 == 10) n1 = 0;

		r = rand() % 2;
		if (r == 0) n2--;
		else n2++;
		if (n2 == -1) n2 = 9;
		else if (n2 == 10) n2 = 0;

		arr[n1] = 1;
		arr[n2] = 2;
	}
}