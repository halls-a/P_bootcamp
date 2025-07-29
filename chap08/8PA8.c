/*
8. 정수형 배열을 특정 값으로 채우는 fill_array 함수를 작성하시오.
단, 포인터와 포인터 역참조 연산자를 이용한다.
fill_array 함수를 이용해서 크기가 20인 int 배열을 입력받은 값으로 채우고 출력하는 프로그램을 작성하시오.

실행결과
배열의 원소에 저장할 값? [ 5 ]
배열: 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
*/

#include <stdio.h>

void fill_array(int num, int *p);
int main(){

    int arr[20] = { 0 };
    int n;

    printf("배열의 원소에 저장할 값? ");
    scanf("%d", &n);
    fill_array(n, arr);
    printf("배열: ");
    for(int i = 0; i < 20; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

void fill_array(int num, int *p){
    int i = 0;
    while (i < 20)
    {
        *(p + i) = num;
        i++;
    }
}
