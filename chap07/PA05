#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int arr();

int main() {

	arr();

	return 0;
}

int arr() {
	int arr[SIZE] = { 23, 45 ,62, 12, 99, 56, 87, 32, 54, 13 }, find, j = 0;

	printf("배열: ");

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n찾을 값? ");
	scanf("%d", &find);

	for (; j < SIZE; j++) {
		if (find == arr[j]) {
			break;
		}
	}
	if (j < 10) printf("%d는 %d번째 원소입니다.", find, j + 1);
	else printf("%d는 원소중에 없습니다.", find);
}
