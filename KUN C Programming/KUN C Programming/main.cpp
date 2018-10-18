#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int arr[10], i;
	for (i = 0; i < 10; i++)
		arr[i] = rand() % 20;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	int n;
	int s1, s2, s3;
	scanf("%d", &n);
	s1 = s2 = s3 = 0;
	for (i = 0; i < 10; i++) {
		if (n < arr[i])
			s3++;
		else if (n == arr[i])
			s2++;
		else
			s1++;
	}

	printf("큰 수는 %d개\n", s3);
	printf("같은 수는 %d개\n", s2);
	printf("낮은 수는 %d개\n", s1);
}