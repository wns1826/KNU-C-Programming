#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>

int main() {
	srand(time(NULL));
	int arr[10] = { 0 };
	int n1, n2, i, r, c = 0;

	n1 = rand() % 10;
	n2 = rand() % 10;

	arr[n1] = 1;
	arr[n2] = 2;

	while (1) {
		system("cls");
		for (i = 0; i < 10; i++)
			printf("%d ", arr[i]);
		if (n1 == n2) printf("(°ãÄ§) ");
		if (c != 0) printf("(ºÙÀ½)");
		Sleep(500);

		arr[n1] = 0;
		arr[n2] = 0;

		if (c != 0) {
			r = rand() % 2;
			if (r == 0) n1--, n2--;
			else n1++, n2++;
			if (n1 == -1)
				n1 += 10;
			if (n2 == -1)
				n2 += 10;

			if (c == 1) {
				if (rand() % 2 == 0)
					c = 0;
			}
			else
				c--;
		}

		else {
			r = rand() % 2;
			if (r == 0) n1--;
			else n1++;
			if (n1 == -1) n1 += 10;

			r = rand() % 2;
			if (r == 0) n2--;
			else n2++;
			if (n2 == -1) n2 += 10;

			if (abs(n1 - n2) <= 1) {
				if (rand() % 2 == 0)
					c = 5;
			}
		}

		n1 %= 10;
		n2 %= 10;
		arr[n1] = 1;
		arr[n2] = 2;
	}
}