#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
	int arr[10], i, n, m;
	n = 1;
	m = rand() % 9 + 1;
	arr[0] = m;
	while (1) {
		for (i = 0; i < 10; i++) {
			if (i < n)
				arr[i] = m - i;
			else
				arr[i] = 0;
		}
		system("cls");
		for (i = 0; i < 10; i++)
			printf("%d ", arr[i]);

		char ch = _getch();
		if (ch == 75)
			n--;
		else if (ch == 77)
			n++;
		if (n < 1)
			n = 1;
		if (m < n)
			n = m;
	}
}