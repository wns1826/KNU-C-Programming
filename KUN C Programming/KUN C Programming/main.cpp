#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	srand(time(NULL));
	int a[10], i;
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 10;
		sum = sum + a[i];
		printf("a[%d] : %d\n", i, a[i]);
	}
	printf("%d", sum);
}