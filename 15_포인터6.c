#include <stdio.h>

// 포인터 변수 크기
//  => 포인터는 주소를 저장하기 때문에
//     주소 타입의 크기가 나옵니다.
//  => 32비트 운영체제
//     - 4바이트
//     64비트 운영체제
//     - 8바이트

int main()
{
    int n = 10;
    int* p = &n;

    double d = 3.14;
    double* p2 = &d;

    char c = 'a';
    char* pc = &c;

    printf("%lu\n", sizeof(n)); // 4
    printf("%lu\n", sizeof(p)); // 8

    printf("%lu\n", sizeof(p2)); // 8
    printf("%lu\n", sizeof(pc)); // 8

    return 0;
}