#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
	srand(time(NULL));
	int arr[10] = { 0 }, n, in, i;
	n = rand() % 10 + 1;
	in = rand() % 10;
	arr[in] = n;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	while (1) {
		char ch = _getch();
		if (ch == 75) {
			arr[in] = 0;
			if (in == 0)
				in = 10;
			arr[--in] = --n;
		}
		else if (ch == 77 ){
			arr[in] = 0;
			if (in == 9)
				in = -1;
			arr[++in] = ++n;
		}
		system("cls");
		for (i = 0; i < 10; i++)
			printf("%d ", arr[i]);
	}
}