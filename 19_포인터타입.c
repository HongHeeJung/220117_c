#include <stdio.h>

// 1. 포인터 변수의 크기는 동일합니다.
//  => 메모리 주소를 담는 변수 타입입니다.
//  32bit: 4바이트
//  64bit: 8바이트

// low              high
// [   ][   ][   ][   ]
// => CPU가 변수를 메모리에 저장하고 로드하는 방법 2가지
//  1) 리틀 엔디안
// low                          high
// [ 0x78 ][ 0x56 ][ 0x34 ][ 0x12 ]

//  2) 빅 엔디안(네트워크 엔디안)
// low                          high
// [ 0x12 ][ 0x34 ][ 0x56 ][ 0x78 ]

// 2. 포인터 변수에 다른 타입의 변수의 주소를 담으면 컴파일
//   오류 / 경고가 발생합니다.
// => 명시적으로 타입을 변환해주어야 합니다.
//    "캐스팅"
//   : 다른 타입으로 변환하는 연산자 입니다.

int main()
{
    int n = 0x12345678;

    char* p = (char*)&n;
    // 의도: "메모리를 해석하는 방법"을 변경하겠다.

    // printf("%x %x %x %x\n", *p, *(p + 1))
    printf("%x %x %x %x\n", p[0], p[1], p[2], p[3]);

    return 0;
}