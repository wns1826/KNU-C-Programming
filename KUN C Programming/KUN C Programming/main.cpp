#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
	srand(time(NULL));

	char arr[11] = "          ", i;
	int a = rand() % 10;
	arr[a] = 'a';
	printf("%s\n", arr);

	char n;
	while (true) {
		n = getch();
		if (n == 75) {
			a--;
			if (a < 0)
				a = 0;
			arr[a + 1] = ' ';
			arr[a] = 'a';
			printf("%s\n", arr);
		}
		else if (n == 77) {
			a++;
			if (a > 9)
				a = 9;
			arr[a - 1] = ' ';
			arr[a] = 'a';
			printf("%s\n", arr);
		}

	}
}