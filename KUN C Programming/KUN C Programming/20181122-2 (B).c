#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int arr[3];
	int i, chk = 1;

	while (chk) {
		for (i = 0; i < 3; i++)
			arr[i] = rand() % 5;

		if (arr[0] == arr[1] && arr[1] == arr[2])
			chk = 0;
	}
}