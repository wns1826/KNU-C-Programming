#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int arr[10], i, t = 0;
	for (i = 0; i < 10; i++)
		arr[i] = i + 1;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	while (1) {
		char ch = _getch();
		if (ch == 75) {
			t = arr[0];
			for (i = 0; i < 9; i++)
				arr[i] = arr[i + 1];
			arr[9] = t;
		}
		else if (ch == 77) {
			t = arr[9];
			for (int i = 9; i != -1; i--)
				arr[i + 1] = arr[i];
			arr[0] = t;
		}
		system("cls");
		for (i = 0; i < 10; i++)
			printf("%d ", arr[i]);
	}
}