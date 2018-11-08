#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	srand(time(NULL));
	int arr[10], i, arr_rev[10];
	for (i = 0; i < 10; i++)
		arr[i] = rand() % 20;
	for (i = 0; i < 10; i++)
		arr_rev[9 - i] = arr[i];
	for (i = 0; i < 10; i++)
		printf("%d ", arr_rev[i]);
}