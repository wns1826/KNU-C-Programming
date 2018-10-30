#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int arr[5][5], i, j;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			arr[i][j] = rand() % 10;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");

	int x, y;
	scanf("%d %d", &x, &y);
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == x || j == y)
				printf("%d ", arr[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
}

/*#include <stdio.h>
void main()
{
	char t;
	scanf("%c", &t);
	if ('a' <= t && t <= 'z')
	{
		printf("%c", t - 32);
	}
	if ('A' <= t && t <= 'Z')
	{
		printf("%c", t + 32);
	}
}*/