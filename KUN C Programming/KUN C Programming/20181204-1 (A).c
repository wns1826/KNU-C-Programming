#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
	srand(time(NULL));
	char arr[10][10] = { 0 };
	int n = rand() % 2 + 2;
	int r_h[3], r_x[3];
	for (int i = 0; i < 3; i++) {
		r_h[i] = rand() % 4 + 5;
		r_x[i] = rand() % 10;
	}
	r_h[1] = r_h[2] = r_h[0];
	for (int i = 0; i < r_h[0]; i++) {
		for (int j = 0; j < n; j++)
			arr[9 - i][r_x[j]] = '@';

		system("cls");
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (arr[i][j] == 0)
					printf("  ");
				else
					printf("%c ", arr[i][j]);
			}
			printf("\n");
		}
		Sleep(500);
		for (int j = 0; j < n; j++)
			arr[9 - i][r_x[j]] = 0;
	}
	int q[30][4], q_n = 0;
	for (int j = 0; j < n; j++) {
		int r_n = rand() % 3 + 4;
		for (int i = 0; i < r_n; i++) {
			q[q_n][0] = 10 - r_h[j];
			q[q_n][1] = r_x[j];

			int s = 0;
			while (s == 0) {
				q[q_n][2] = rand() % 2 * (rand() % 2 ? 1 : -1);
				q[q_n][3] = rand() % 2 * (rand() % 2 ? 1 : -1);
				s = q[q_n][2] * 10 + q[q_n][3];
			}
			q_n++;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < q_n; j++) {
			if (0 <= q[j][0] && q[j][0] <= 9 && 0 <= q[j][1] && q[j][1] <= 9)
				arr[q[j][0]][q[j][1]] = 0;
			q[j][0] += q[j][2];
			q[j][1] += q[j][3];
			if (0 <= q[j][0] && q[j][0] <= 9 && 0 <= q[j][1] && q[j][1] <= 9)
				arr[q[j][0]][q[j][1]] = '*';
		}

		system("cls");
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (arr[i][j] == 0)
					printf("  ");
				else
					printf("%c ", arr[i][j]);
			}
			printf("\n");
		}
		Sleep(500);
	}
	//	for ()
}