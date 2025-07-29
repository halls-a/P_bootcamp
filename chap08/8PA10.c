/*
10 3x3 행렬의 합을 구하는 add_matrix 함수를 작성하시오. 
add_matrix 함수를 이용해서 행렬의 합을 구하는 프로그램을 작성하시오.
행렬로 사용될 2차원 배열은 마음대로 초기화해도 된다.

a11  a12  a13     b11  b12  b13     a11+b11  a12+b12  a13+b13
a21  a22  a23  +  b21  b22  b23  =  a21+b21  a22+b22  a23+b23
a31  a32  a33     b31  b32  b33     a31+b31  a32+b32  a33+b33

실행결과
x 행렬:
 10  20  30
 40  50  60
 70  80  90
y 행렬:
  9   8   7
  6   5   4
  3   2   1
x + y 행렬:
 19  28  37
 46  55  64
 73  82  91
*/
#include <stdio.h>

int* add_matrix(int *px, int *py);
int main(){

  int count = 0;
  int x[3][3] = { 10, 20, 30,
                  40, 50, 60,
                  70, 80, 90 };
  int y[3][3] = { 1, 2, 3,
                  4, 5, 6,
                  7, 8, 9 };
  printf("x 행렬:\n");
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%d ", x[i][j]);
    }
    printf("\n");
  }
  printf("y 행렬:\n");
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%d ", y[i][j]);
    }
    printf("\n");
  }
  printf("x + y 행렬:\n");
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%d ", *(add_matrix(x, y) + count));
      count++;
    }
    printf("\n");
  }
  return 0;
}

int* add_matrix(int *px, int *py){
  int add[3][3] = { 0 }, count = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      add[i][j] = *(px + count) + *(py + count);
      count++;
    }
  }
  return add;
}
