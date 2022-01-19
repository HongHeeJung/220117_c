// 15_포인터4.c
#include <stdio.h>

// 1. 배열의 이름은 배열의 첫번째 원소의 시작 주소로 해석됩니다.
// => Decay
//   - 예외
//    1) sizeof
//    2) &

// 2. 포인터에 대해서 증가 / 감소 연산을 수행할 수 있습니다.
// => 포인터에 대해서 + / - 연산도 수행할 수 있습니다.
// => 포인터 변수에 대해서 증가하거나 감소하면
//    "대상체의 크기 만큼 증가(감소)" 합니다.
//    int* p = 100;
//    p + 1 => p + sizeof(int) * 1
//
//    double* p = 100;
//    p + 1 => p + sizeof(double) * 1

int main()
{
    int x[5] = { 1, 2, 3, 4, 5 };

    // int* p = &x[0];
    int* p = x;

    printf("%p\n", x); // 0x16aee71e0
    printf("%p\n", p); // 0x16aee71e0

    printf("%p\n", p + 2);

    return 0;
}