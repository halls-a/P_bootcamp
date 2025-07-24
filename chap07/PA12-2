#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

char arr[SIZE] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' };

int book();

int main() {

	while (1) {
		if (book() == 1) {
			break;
		}
	}

	return 0;
}

int book() {

	int sit, j = 0;
	static int sum = 0;

	printf("현재 좌석: [ ");
	for (int i = 0; i < SIZE; i++) {
		printf("%c ", arr[i]);
	}
	printf("]\n");
	printf("예매 할 좌석 수? ");
	scanf("%d", &sit);

	for (j = sum; j < sum + sit; j++) {
		arr[j] = 'X';
		printf("%d ", j + 1);
	}
	sum += sit;

	printf("번 좌석을 예매했습니다.\n");

	if (arr[SIZE - 1] == 'X') {
		return 1;
	}
	return 0;
}
