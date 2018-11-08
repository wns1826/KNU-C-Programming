#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	srand(time(NULL));
	int arr[10], i;
	for (i = 0; i < 10; i++)
		arr[i] = rand() % 20;

	int sum = 0, index, average = 0;
	for (i = 0; i < 10; i++)
		sum += arr[i];
	average = sum / 10;

	printf("Æò±Õ: %d\n", average);
	printf("ÀÎµ¦½º: ");
	for (i = 0; i < 10; i++)
		if (average == arr[i])
			printf("%d ", i);
}