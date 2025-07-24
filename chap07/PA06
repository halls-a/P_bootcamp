/*
* 작성자: 전기준
* 파일명: 7.6.c
* chap 07 - programming assignment 06
* 문제: 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램을 작성하시오.
* 실수형 배열의 초기값은 마음대로 정하시오.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main() {

	double arr[SIZE] = { 1.2, 3.4, 5.6, 7.8, 9.0, 2.1, 4.3, 6.5, 8.7, 0.9 };

	printf("배열: ");
	for (int i = 0; i < SIZE; i++) {
		printf("%.1lf ", arr[i]);
	}

	printf("\n역순: ");
	for (int i = 0; i < SIZE; i++) {
		printf("%.1lf ", arr[SIZE - i - 1]);
	}

	return 0;
}
