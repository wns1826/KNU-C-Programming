#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
	srand(time(NULL));

	char arr[11] = "          ";
	int i, ia, ib;
	ia = rand() % 9;
	ib = ia + 1 + rand() % (9 - ia);
	arr[ia] = 'a';
	arr[ib] = 'b';

	printf("%s", arr);

	while (1) {
		char ch = _getch();
		if (ch == 75) {
			if (ia != 0) {
				if (ia + 1 == ib) {
					arr[ia--] = ' ';
					arr[ia] = 'a';
					arr[ib--] = ' ';
					arr[ib] = 'b';
				}
				else {
					arr[ia--] = ' ';
					arr[ia] = 'a';
				}
			}
		}
		else if (ch == 77) {
			if (ia != 8) {
				if (ia + 1 == ib) {
					arr[ia++] = ' ';
					arr[ia] = 'a';
					arr[++ib] = 'b';
				}
				else {
					arr[ia++] = ' ';
					arr[ia] = 'a';
				}
			}
		}
		system("cls");
		printf("%s", arr);
	}
}