// 13_정적지역변수.c
#include <stdio.h>

// int count = 0;

// 정적 지역 변수(내부 정적 변수)
// : 함수 호출이 종료되어도 메모리에서 유지되고,
//   오직 선언한 함수에서만 사용할 수 있습니다.
void foo()
{
    static int count = 0;
    printf("count: %d\n", ++count);
}

int main()
{
    // 전역 변수는 누구나 접근이 가능하다.
    // count = 100;
    for (int i = 0; i < 5; ++i) {
        foo();
    }
}