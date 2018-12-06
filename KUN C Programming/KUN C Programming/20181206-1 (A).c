#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>

int main() {
	int arr[3][3], x = 0, y = 0;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			arr[i][j] = i * 3 + j;

	while (1) {
		system("cls");
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}

		switch (_getch()) {
		case 72: //À§
			if (x != 2) {
				arr[x][y] = arr[x + 1][y];
				arr[x + 1][y] = 0;
				x++;
			}
			break;
		case 75: //¿Þ
			if (y != 2) {
				arr[x][y] = arr[x][y + 1];
				arr[x][y + 1] = 0;
				y++;
			}
			break;
		case 77: //¿À
			if (y != 0) {
				arr[x][y] = arr[x][y - 1];
				arr[x][y - 1] = 0;
				y--;
			}
			break;
		case 80: //¾Æ
			if (x != 0) {
				arr[x][y] = arr[x - 1][y];
				arr[x - 1][y] = 0;
				x--;
			}
			break;
		}
	}
}