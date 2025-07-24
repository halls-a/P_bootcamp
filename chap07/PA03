#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int ARR();

int main() {

	ARR();

	return 0;
}

int ARR() {
	int arr[SIZE] = { 23, 45 ,62, 12, 99, 56, 87, 32, 54, 13 }, max, min;

	printf("배열? ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	max = min = arr[0];

	for (int i = 0; i < SIZE; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		else if(min > arr[i]) {
			min = arr[i];
		}
	}
	printf("\n최댓값: %d\n최솟값: %d", max, min);
}
