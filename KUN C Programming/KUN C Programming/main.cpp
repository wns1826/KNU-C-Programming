#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
	srand(time(NULL));

	int arr[10] = { 0 };
	int n = rand() % 10, i;
	arr[n] = 1;

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	while (1) {
		char ch = _getch();
		if (ch == 75) {
			arr[n--] = 0;
			if (n == -1)
				n = 9;
			arr[n] = 1;

			system("cls");
			for (i = 0; i < 10; i++)
				printf("%d ", arr[i]);
			printf("\n");
		}
		else if (ch == 77) {
			arr[n++] = 0;
			if (n == 10)
				n = 0;
			arr[n] = 1;

			system("cls");
			for (i = 0; i < 10; i++)
				printf("%d ", arr[i]);
			printf("\n");
		}
	}
}