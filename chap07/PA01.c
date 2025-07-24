/*
* 작성자: 전기준
* 파일명: 7PA01.c
* chap 07 - programming assignment 01
* 문제: 등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다.
* 크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다.
* 첫 번째 항의 값과 공차를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int input();
int common_difference(int a, int d, int i);

int main() {
	input();

	return 0;
}
/*
* 함수명: input
* 기능: 사용자에게 첫 항과 공차를 입력받는다.
*/
int input() {
	int arr[SIZE] = { 0 };
	int i = 0, a, d;

	printf("첫 번째 항? ");
	scanf("%d", &a);

	printf("공차? ");
	scanf("%d", &d);

	printf("등차수열: ");

	while (i < SIZE) {
		arr[i] = common_difference(a, d, i);

		i++;
	}

	for (int j = 0; j < SIZE; j++) {
		printf("%d ", arr[j]);
	}
}
/*
* 함수명: common_difference
* 기능: 전달받은 인자값을 이용하여 등차수열의 결과를 계산한다.
* 반환: 계산된 수열의 값
*/
int common_difference(int a, int d, int i) {
	return a + (i * d);
}
