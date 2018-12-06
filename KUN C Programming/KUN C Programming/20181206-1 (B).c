//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//	srand(time(NULL));
//	int arr[5], chk[10] = { 0 };
//	
//	for (int i = 0; i < 5;) {
//		int r = rand() % 10;
//		if (chk[r] == 0) {
//			arr[i] = r;
//			chk[r] = 1;
//			i++;
//		}
//	}
//
//	for (int i = 0; i < 5; i++)
//		printf("%d ", arr[i]);
//}