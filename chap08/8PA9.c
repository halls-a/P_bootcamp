/*
9. 열 크기가 5인 2차원 int 배열의 모든 원소를 특정 값으로 채우는 fill_2d_array 함수를 작성하시오.
함수의 매개변수로 배열 전체에 대한 포인터와 배열의 행 크기를 전달한다.
열 크기가 5, 행 크기가 4인 2차원 배열을 입력받은 값으로 채우고 출력하는 프로그램을 작성하시오.

실행결과
배열의 원소에 저장할 값? [ 5 ]
5 5 5 5 5
5 5 5 5 5
5 5 5 5 5
5 5 5 5 5
*/
#include <stdio.h>

void fill_2d_array(int y, int h, int num, int *p);
int main(){

    const int h = 4, y = 5, n;
    int arr[h][y] = { 0 };

    printf("배열의 원소에 저장할 값? ");
    scanf("%d", &n);

    fill_2d_array(y, h, n, arr);

    for(int i = 0; i < h; i++){
        for(int j = 0; j < y; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void fill_2d_array(int y, int h, int num, int *p){
    for(int i = 0; i < h * y; i++){
        *(p + i) = num;
    }
}
