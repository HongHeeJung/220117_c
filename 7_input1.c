// 7_input1.c
#include <stdio.h>
// 표준 입출력

// 표준 입력 장치: 키보드
//  - scanf
// 표준 출력 장치: 모니터
//  - printf

int main()
{
    int age = 0; // 4바이트
    printf("나이를 입력하세요 >> ");

    // 입력 받고자 하는 변수의 주소를 전달해야 합니다.
    scanf("%d", &age);

    printf("입력된 나이는 %d살 입니다.\n", age);

    return 0;
}