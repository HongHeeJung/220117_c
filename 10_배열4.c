// 10_배열4.c
#include <stdio.h>

// C89: 배열의 크기는 반드시 컴파일 시간에 결정되어야 합니다.
// C99: 배열의 크기로 변수를 사용할 수 있습니다.

int main()
{
    int n = 10;

    int arr2[10];
    // > 배열의 크기가 컴파일 타임에 결정됩니다.

    scanf("%d", &n);
    int arr[n]; // ?
    // > 배열의 크기가 런타임에 결정됩니다.

    // C89 표준은 에러
    // C99 표준은 Ok

    printf("%lu\n", sizeof(arr));
}