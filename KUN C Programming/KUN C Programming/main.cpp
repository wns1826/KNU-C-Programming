#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>

int main() {
	srand(time(NULL));

	char arr[11] = "          ";
	int i = rand() % 9;
	int j = i + rand() % (8 - i) + 1;
	arr[i] = 'a';
	arr[j] = 'b';
	printf("%s\n", arr);

	char n;
	while (1) {
		n = _getch();
		system("cls");
		
		if (n == 75) {
			i--;
			if (i < 0)
				i = 0;
			arr[i + 1] = ' ';
			arr[i] = 'a';
			printf("%s\n", arr);
		}
		else if (n == 77) {
			i++;
			if (i > 8)
				i = 8;
			arr[i - 1] = ' ';
			arr[i] = 'a';
			if (i == j) {
				j++;
				arr[j] = 'b';
			}
			printf("%s\n", arr);
		}
	}
}