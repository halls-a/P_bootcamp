/*
13. 크기가 같은 2개의 정수형 배열을 매개변수로 전달받아 두 배열의 원소들의 값을 맞바꾸는 swap_array 함수를 작성하시오.
swap_array 함수를 이용해서 크기가 10인 두 배열의 값을 맞바꾸는 프로그램을 작성하시오.
배열의 초기값은 마음대로 정해도 된다.

실행 결과
a: 1  3  5  7  9 11 13 15 17 19
b: 0  2  4  6  8 10 12 14 16 18
<< swap_array 호출 후 >>
a: 0  2  4  6  8 10 12 14 16 18
b: 1  3  5  7  9 11 13 15 17 19
*/
#include <stdio.h>

void swap_array(int *pa, int *pb);

int main(){

    int a[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int b[10] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18 };

    printf("a: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
    printf("\nb: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", b[i]);
    }
    printf("\n<< swap_array 함수 호출 후 >>\n");
    swap_array(a, b);
    printf("a: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
    printf("\nb: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", b[i]);
    }
    return 0;
}

void swap_array(int *pa, int *pb){
    int swap[10] = { 0 };

    for(int i = 0; i < 10; i++){
        swap[i] = pa[i];
        pa[i] = pb[i];
        pb[i] = swap[i];
    }
}
