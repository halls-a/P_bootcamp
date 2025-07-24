#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double sum = 0;
	int arr[5][4] = { {28, 28, 26 ,9}, 
					  {30, 27, 30, 10},
					  {25, 26, 24, 8}, 
					  {18, 22, 22, 5}, 
					  {24, 25, 30, 10} };

	for (int j = 0; j < 5; j++) {
		printf("학생 %d번:", j + 1);
		for (int i = 0; i < 4; i++) {
			printf("\t%d", arr[j][i]);
		}
		printf("\t==>");
		for (int i = 0; i < 4; i++) {
			sum += arr[j][i];
		}
		printf("\t%.0lf\n", sum); // 합계 값 안나오는거 서식지정자 변경으로 해결
		sum = 0;
	}
	sum = 0;
	printf("\n항목별 평균:");
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 5; i++) {
			sum += (double)arr[i][j];
		}
		sum /= 5.0;
		printf("\t%.2lf", sum);
		sum = 0;
	}
	return 0;
}
