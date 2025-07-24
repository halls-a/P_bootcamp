#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main() {

	int arr[SIZE] = { 0 }, j = 0, sit, k = 0;

	while (1) {
		printf("현재 좌석: [ ");
		for (int i = 0; i < SIZE; i++) {
			if (arr[i] == 0) {
				printf("O ");
			}
			else {
				printf("X ");
			}
		}
		printf("]\n");
		error:
		printf("예매 할 좌석 수? ");
		scanf("%d", &sit);
		k += sit;
		if (k > 10) {
			printf("예매 할 좌석의 수가 너무 큽니다.\n");
			k -= sit;
			goto error;
		}
		for (; j < k; j++) {
			arr[j] = 1;
			printf("%d ", j + 1);
		}
		printf("번 좌석을 예매했습니다.\n");
		if (arr[SIZE - 1] == 1) {
			break;
		}
	}
	return 0;
}
