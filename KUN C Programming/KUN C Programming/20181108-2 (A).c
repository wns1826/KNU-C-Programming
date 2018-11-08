#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
	srand(time(NULL));

	int arr[10], n, m, i;
	n = rand() % 6;
	m = 1;

	while (1) {
		for (i = 0; i < 10; i++)
			arr[i] = 0;
		for (i = 0; i < 5; i++)
			arr[(n + i) % 10] = m + i;

		system("cls");
		for (i = 0; i < 10; i++)
			printf("%d ", arr[i]);

		char ch = _getch();
		if (ch == 75)
			n--, m--;
		if (ch == 77)
			n++, m++;
		if (n == -1)
			n = 9;
	}
}