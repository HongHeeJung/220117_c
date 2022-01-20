#include <stdio.h>
#include <stdlib.h> // malloc, free
#include <string.h> // strcmp, strcpy, strcat, strlen

// 1. 문자열 길이 함수
//  => strlen

// 2. 문자열 복제 함수
//  => 동적 메모리 할당을 통해 문자열을 복제합니다.
//  => strdup
//  => 반드시 free 해줘야 합니다.
#define _CRT_SECURE_NO_WARNINGS
// => 배열을 사용할 때, 길이 정보 없이 사용할 경우
//    문자열은 널 문자가 없을 경우
//    보안에 문제가 발생할 수 있습니다.

int main()
{
    char str[32] = "hello";
    printf("%lu\n", sizeof(str)); // 32 byte
    printf("%lu\n", strlen(str));

    // 동적 메모리 할당을 통해 문자열을 할당하고 싶다.
    // 1. 문자열 길이 + 1 만큼의 메모리를 할당합니다.
    char* p = (char*)malloc(strlen(str) + 1); // 6 byte 할당
    // 2. 문자열 복사
    strcpy(p, str);
    printf("%s\n", p);

    char* p2 = strdup(str);
    printf("%s\n", p2);

    // 3. 메모리 해지
    free(p);
    free(p2);

    return 0;
}