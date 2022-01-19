// 6_sizeof.c
#include <stdio.h>

// 변수와 타입의 크기를 확인하는 목적으로 사용하는 연산자입니다.

int main()
{
    int num = 10;

    // unsigned long: sizeof
    printf("%lu\n", sizeof(int)); // 4
    printf("%lu\n", sizeof(num)); // 4

    // printf("%lu\n", sizeof int); // error!
    printf("%lu\n", sizeof num); // 4
}